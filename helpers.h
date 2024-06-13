// helpers.h
#ifndef HELPERS_H
#define HELPERS_H

#define MAX_SIZE 5000


struct IntArray {
    int *arr;
    int size;
};

struct IntArray appendInt(struct IntArray array, int value);

int Read_data_from_file(const char *file_path, struct IntArray *data);
double Calculate_mean(int data[], int n);
double Calculate_median(int data[], int n);
double Calculate_variance(int data[], int n);
double Calculate_standard_deviation(double variance);
int Compare(const void *a, const void *b); // Declaration of compare function

#endif /* HELPERS_H */
