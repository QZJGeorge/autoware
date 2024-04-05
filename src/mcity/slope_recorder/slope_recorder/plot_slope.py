import numpy as np
import matplotlib.pyplot as plt

# Function to read slope data from the txt file
def read_slope_data(file_path='/home/mtl12345/autoware/src/mcity/slope_recorder/data/gnss_slope.txt'):
    x_coords, y_coords, slopes = [], [], []
    with open(file_path, 'r', encoding='utf-8') as file:
        for line in file:
            # Extracting x, y, and slope from each line
            parts = line.strip().split(': ')
            coords = eval(parts[0])  # Convert string tuple to actual tuple
            slope = float(parts[1])
            x_coords.append(coords[0])
            y_coords.append(coords[1])
            slopes.append(slope)
    return x_coords, y_coords, slopes

# Function to plot the slope data
def plot_slope(x_coords, y_coords, slopes):
    plt.figure(figsize=(10, 8))
    # Creating a scatter plot with slopes represented as colors
    scatter = plt.scatter(x_coords, y_coords, c=slopes, cmap='coolwarm')
    plt.colorbar(scatter, label='Slope')
    plt.xlabel('X Coordinate')
    plt.ylabel('Y Coordinate')
    plt.title('Slope Heatmap')
    plt.axis('equal')
    plt.show()

# Main function to orchestrate reading and plotting
def main():
    x_coords, y_coords, slopes = read_slope_data()
    plot_slope(x_coords, y_coords, slopes)

if __name__ == "__main__":
    main()
