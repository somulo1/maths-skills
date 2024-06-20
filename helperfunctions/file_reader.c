#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

struct IntArray appendInt(struct IntArray array, int value) {
    array.size++;
    array.arr = realloc(array.arr, array.size * sizeof(int)); // Expand the array
    array.arr[array.size-1] = value;
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
    while (fscanf(file, "%d", &num) == 1) {
        arr = appendInt(arr, num);
        i++;
    }

    if (!feof(file)) {
        // fscanf failed to read an integer
        printf("Error reading integer from file.Correct the file\n");
        return -1;
    }

    if (arr.size == 0) {
        printf("File didn't contain any integers\n");
        return -1;
    }

    fclose(file);

    data->arr = arr.arr;
    data->size = arr.size;

     // Print the array
    // printf("Array: ");
    // for (int i = 0; i < arr.size; i++) {
    //     printf("%d ", arr.arr[i]);
    // }
    printf("\n");
    return i; // Return the number of elements read
}
