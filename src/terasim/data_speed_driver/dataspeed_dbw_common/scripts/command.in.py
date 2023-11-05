import subprocess
from typing import List, Optional
from launch import Action, LaunchContext, LaunchDescription, LaunchDescriptionEntity, SomeSubstitutionsType, Substitution
from launch.actions import DeclareLaunchArgument, SetLaunchConfiguration, LogInfo
from launch.substitutions import LaunchConfiguration, TextSubstitution
from launch.utilities import normalize_to_list_of_substitutions, perform_substitutions
# 
# This file is used as an include by the xml files to replace functionality removed in ROS2
# This include takes the result of the shell command and arguments and stores them in the
#   supplied launch parameter
#
# Basically, this script replaces ROS1's <param name="param" command="cmd args">
# 

class ExportCommandResult(Action):
  def __init__(
    self,
    *,
    cmd: SomeSubstitutionsType = "",
    args: SomeSubstitutionsType = "",
    **kwargs
  ) -> None:
    super().__init__(**kwargs)
    self.cmd = normalize_to_list_of_substitutions(cmd)
    self.args = normalize_to_list_of_substitutions(args)
  
  def execute(self, context: LaunchContext) -> Optional[List[LaunchDescriptionEntity]]:
    cmd = perform_substitutions(context, self.cmd) + " " + perform_substitutions(context, self.args)
    if len(cmd) <= 0:
      return
    result = subprocess.check_output(cmd, shell=True)
    #decode if it's a byte-like object
    try:
      result = result.decode("utf-8"),
    except (UnicodeDecodeError, AttributeError):
      pass
    return [SetLaunchConfiguration(
      name=LaunchConfiguration( "param" ),
      value=result
    )]

def generate_launch_description():
  return LaunchDescription([
    DeclareLaunchArgument( "param", default_value=TextSubstitution(text="command_param") ),
    DeclareLaunchArgument( "command", default_value="" ),
    DeclareLaunchArgument( "args", default_value="" ),
    ExportCommandResult(
      cmd=LaunchConfiguration( "command" ),
      args=LaunchConfiguration( "args" ),
    ),
    # for debugging
    # LogInfo(msg=["setting parameter: ", LaunchConfiguration("param")]),
    # LogInfo(msg=["output: ", LaunchConfiguration(LaunchConfiguration("param"))])
  ])