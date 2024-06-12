// main.c
#include <stdio.h>
#include "helpers.h"
#include <math.h>

int main(int argc, char **argv) {
    if (argc == 1) {
        return 0;
    } else if (argc > 2) {
        printf("Usage: \n\tgo run . data.txt\n");
        return 1;
    }

    const char *file_path = argv[1];

    struct IntArray intArray; 
    int n = Read_data_from_file(file_path, &intArray);
    if (n < 0) {
        return 1;
    }
    int *data = intArray.arr;

    double mean = Calculate_mean(data, n);
    double median = Calculate_median(data, n);
    double variance = Calculate_variance(data, n);
    variance = Calculate_variance(data, n);
    double standard_deviation = Calculate_standard_deviation(variance);

    printf("Mean: %.0f\n", mean);
    printf("Median: %.0f\n", median);
    printf("Variance: %.0f\n", variance);
    printf("Standard Deviation: %.0f\n", standard_deviation);

    return 0;
}
