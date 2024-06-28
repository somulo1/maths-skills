#include "helpers.h"
#include <stdlib.h>
#include <math.h>

// Function to append an integer value to IntArray
struct IntArray appendInt(struct IntArray array, int value) {
    array.size++;
    array.arr = realloc(array.arr, array.size * sizeof(int)); // Expand the array
    if (array.arr == NULL) {
        perror("realloc");
        exit(EXIT_FAILURE);
    }
    array.arr[array.size - 1] = value;
    return array;
}

// Function to append a double value to IntArray
struct IntArray appendDouble(struct IntArray array, double value) {
    array.size++;
    array.arr = realloc(array.arr, array.size * sizeof(int)); // Expand the array
    if (array.arr == NULL) {
        perror("realloc");
        exit(EXIT_FAILURE);
    }
    array.arr[array.size - 1] = (int)value; // Truncate double to int for simplicity
    return array;
}

int Read_data_from_file(const char *file_path, struct IntArray *data) {
    FILE *file = fopen(file_path, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: \"%s\"\n", file_path);
        perror("fopen");
        return -1; // Error opening file
    }

    struct IntArray arr;
    arr.size = 0;
    arr.arr = NULL;

    int i = 0;
    int num;
    double dnum;
    while (fscanf(file, "%lf", &dnum) == 1) {
        num = (int)dnum; // Truncate double to int for simplicity
        if (dnum == (double)num) {
            arr = appendInt(arr, num);
        } else {
            arr = appendDouble(arr, dnum);
        }
        i++;
    }

    if (!feof(file)) {
        // fscanf failed to read a number
        printf("Error reading number from file. Correct the file format.\n");
        return -1;
    }

    if (arr.size == 0) {
        printf("File didn't contain any numbers.\n");
        return -1;
    }

    fclose(file);

    data->arr = arr.arr;
    data->size = arr.size;

    return i; // Return the number of elements read
}
