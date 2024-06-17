file(REMOVE_RECURSE
  "libtvm_utility.pdb"
  "libtvm_utility.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/tvm_utility.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
