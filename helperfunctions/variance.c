// variance.c
#include "helpers.h"
#include <math.h>

double Calculate_variance(int data[], int n) {
    double mean = Calculate_mean(data, n);
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(data[i] - mean, 2);
    }
    return sum / n;
}

