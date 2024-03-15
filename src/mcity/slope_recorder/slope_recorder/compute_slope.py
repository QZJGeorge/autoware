import csv
import math
import json

# Function to read the CSV data
def read_csv_data(file_path):
    data = []
    with open(file_path, mode='r', encoding='utf-8') as csv_file:
        csv_reader = csv.DictReader(csv_file)
        for row in csv_reader:
            data.append((float(row['x']), float(row['y']), float(row['z'])))
    return data

# Function to compute the slope
def compute_slope(data):
    slope_data = {}
    for i in range(len(data)):
        if i < 10 or i > len(data) - 11:  # Check if there are not enough points before or after
            slope_data[(int(data[i][0]), int(data[i][1]))] = 0.0
        else:
            delta_h = data[i + 10][2] - data[i - 10][2]
            delta_d = 20  # Given
            slope = math.atan(delta_h / delta_d)
            slope_data[(int(data[i][0]), int(data[i][1]))] = slope
    return slope_data

# Function to save the slope data to a text file
def save_to_txt(slope_data, file_path='/home/zhijie/autoware/src/mcity/slope_recorder/data/gnss_slope.txt'):
    with open(file_path, 'w', encoding='utf-8') as txt_file:
        for key, value in slope_data.items():
            txt_file.write(f"{key}: {value}\n")

# Main function to orchestrate the reading, slope computation, and saving to JSON
def main():
    file_path = '/home/zhijie/autoware/src/mcity/slope_recorder/data/gnss_data.csv'
    data = read_csv_data(file_path)
    slope_data = compute_slope(data)

    # Save the computed slope data to a JSON file
    save_to_txt(slope_data)
    print('Slope data saved to gnss_slope.txt')

# Uncomment the following line to run this script directly.
if __name__ == "__main__":
    main()
