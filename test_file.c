#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "helpers.h"
#include <math.h>

void test_mean(int data[], int n, double expected_mean) {
    double mean = Calculate_mean(data, n);
    mean = round(mean);
    assert(mean == expected_mean);
}

void test_median(int data[], int n, double expected_median) {
    double median = Calculate_median(data, n);
    median = round(median);
    assert(median == expected_median);
}

void test_variance(int data[], int n, double expected_variance) {
    double variance = Calculate_variance(data, n);
    variance = round(variance);
    assert(variance == expected_variance);
}

void test_standard_deviation(int data[], int n, double expected_std_dev) {
    double variance = Calculate_variance(data, n);
    double std_dev = Calculate_standard_deviation(variance);
    std_dev = round(std_dev);
    assert(std_dev == expected_std_dev);
}

int main() {
    // Read data from data.txt
    const char *file_path = "test_data.txt"; // Change this to the path of your .txt file
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

    // Test cases
    // Average: 147
    // Median: 148
    // Variance: 837
    // Standard Deviation: 29
    test_mean(data, n, 147); 
    test_median(data, n, 148);
    test_variance(data, n, 837);
    test_standard_deviation(data, n, 29);

    printf("PASS\n   ok\n");
    return 0;
}
