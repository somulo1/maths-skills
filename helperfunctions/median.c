// median.c
#include <stdlib.h>
#include "helpers.h"

double Calculate_median(int data[], int n) {
    int temp[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        temp[i] = data[i];
    }
    qsort(temp, n, sizeof(int), Compare);
    if (n % 2 == 0) {
        return (temp[n/2 - 1] + temp[n/2]) / 2.0;
    } else {
        return temp[n/2];
    }
}
