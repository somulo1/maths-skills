#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "helpers.h"
#include <math.h>

#define EPSILON 0.0001 // Tolerance for floating-point comparisons

void test_mean(int data[], int n, double expected_mean) {
    double mean = Calculate_mean(data, n);
    mean = round(mean);
    assert(fabs(mean - expected_mean) < EPSILON);
}

void test_median(int data[], int n, double expected_median) {
    double median = Calculate_median(data, n);
    median = round(median);
    assert(fabs(median - expected_median) < EPSILON);
}

void test_variance(int data[], int n, double expected_variance) {
    double variance = Calculate_variance(data, n);
    variance = round(variance);
    assert(fabs(variance - expected_variance) < EPSILON);
}

void test_standard_deviation(int data[], int n, double expected_std_dev) {
    double variance = Calculate_variance(data, n);
    double std_dev = Calculate_standard_deviation(variance);
    std_dev = round(std_dev);
    assert(fabs(std_dev - expected_std_dev) < EPSILON);
}

int main() {
    // Read data from data.txt
    const char *file_path = "data.txt"; // Change this to the path of your .txt file
    FILE *file = fopen(file_path, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int data[MAX_SIZE];
    int n = 0;
    while (fscanf(file, "%d", &data[n]) == 1) {
        n++;
    }
    fclose(file);

    // Test cases with expected values
    // Adjust these values as per your requirements
    double expected_mean = 147.0;
    double expected_median = 148.0;
    double expected_variance = 837.0;
    double expected_std_dev = 29.0;

    // Run tests
    test_mean(data, n, expected_mean);
    test_median(data, n, expected_median);
    test_variance(data, n, expected_variance);
    test_standard_deviation(data, n, expected_std_dev);

    printf("PASS. OK\n");

    return 0;
}
