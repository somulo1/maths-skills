#include "helpers.h" // Include the header file containing function declarations

// Comparison function for qsort
int Compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}
