// call all the functions read and carry out calculations based on data read from data.txt
// truncate the result to the nearest intagers
#include <stdio.h>
#include "helpers.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("No file path provided. Provide a \".txt\" data file.\n");
        return 0;
    } else if (argc > 2) {
        printf("Usage: %s data.txt\n", argv[0]);
        return 1;
    }

    const char *file_path = argv[1];

    struct IntArray intArray;
    int n = Read_data_from_file(file_path, &intArray);
    if (n < 0) {
        printf("Error reading data from file.\n");
        return 1;
    }
    int *data = intArray.arr;

    double mean = Calculate_mean(data, n);
    double median = Calculate_median(data, n);
    double variance = Calculate_variance(data, n);
    double standard_deviation = Calculate_standard_deviation(variance);  // Calculate standard deviation

    printf("Average: %.0f\n", mean);
    printf("Median: %.0f\n", median);
    printf("Variance: %.0f\n", variance);
    printf("Standard Deviation: %.0f\n", standard_deviation);

    free(data);  // Free allocated memory

    return 0;
}
