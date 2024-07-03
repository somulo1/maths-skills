#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "helpers.h" // Include your helper functions header

#include <stdio.h>
#include <math.h>

// Function to validate mean calculation
int validate_mean(double mean) {
    // Round the mean to the nearest integer
    double rounded_mean = round(mean);

    if (!(fabs(mean = rounded_mean) ) ){ // Tolerance of 0.5 for rounding to nearest integer
        printf("Mean validation failed: Calculated mean is %.f, \n", mean);
        return -1;
    }
    return 1;
}

// Function to validate variance calculation
int validate_variance(double variance) {
    // Variance should be non-negative
    if (variance < 0) {
        printf("Variance validation failed:\n");
        return 0;
    }
    return 1;
}

// Function to validate standard deviation calculation
int validate_standard_deviation(double standard_deviation) {
       if (standard_deviation < 0) {
        printf("Standard Deviation validation failed:\n");
        return 0;
    }
    return 1;
}


int validate_median(double median) {
     return 1; // Placeholder for validation
}

int main() {
    const char *file_path = "data.txt"; // Path to your data file (assuming it's named data.txt)

    struct IntArray intArray;
    int n = Read_data_from_file(file_path, &intArray);
    if (n < 0) {
        printf("Error reading data from file.\n");
        return 1;
    }
    int *data = intArray.arr;

    // Check if the array size is valid
    if (n <= 0) {
        printf("Invalid data size.\n");
        free(data); // Free allocated memory
        return 1;
    }

    // Calculate mean
    double mean = Calculate_mean(data, n);

    // Validate mean calculation
    if (!validate_mean(mean)) {
        printf("Mean calculation failed.\n");
        free(data); // Free allocated memory
        return 1;
    }

    // Validate median calculation
    double variance = Calculate_variance(data, n);

    if (!validate_variance(variance)) {
        printf("Variance calculation failed.\n");
        free(data); // Free allocated memory
        return 1;
    }

    double standard_deviation = Calculate_standard_deviation(variance);

    if (!validate_standard_deviation(standard_deviation)) {
        printf("Standard deviation calculation failed.\n");
        free(data); // Free allocated memory
        return 1;
    }

    double median = Calculate_median(data, n);

    if (!validate_median(median)) {
        printf("Median calculation failed.\n");
        free(data); // Free allocated memory
        return 1;
    }

    // Print test results
    
    free(data); // Free allocated memory

    printf("PASS. OK\n");

    return 0;
}
