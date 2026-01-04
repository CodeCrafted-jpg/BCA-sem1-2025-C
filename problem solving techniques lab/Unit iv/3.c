// Design a modular algorithm/program which reads an array of n integer elements and 
// outputs mean (average), range (max-min) and mode (most frequent elements)? 
#include <stdio.h>

// 1. Module to calculate Mean
double getMean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int getRange(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    return max - min;
}


void printMode(int arr[], int n) {
    int maxCount = 0;
    int modeValue = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }

    if (maxCount == 1) {
        printf("Mode: No unique mode (all elements appear once)\n");
    } else {
        printf("Mode: %d (appeared %d times)\n", modeValue, maxCount);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n--- Results ---\n");
    printf("Mean: %.2f\n", getMean(arr, n));
    printf("Range: %d\n", getRange(arr, n));
    printMode(arr, n);

    return 0;
}