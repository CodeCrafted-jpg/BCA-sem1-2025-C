// Design a modular algorithm/program which reads an array of n integer elements and 
// outputs median? 

#include <stdio.h>

// Helper function to sort the array (Mandatory for Median)
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double getMedian(int arr[], int n) {
    
    sortArray(arr, n);

    if (n % 2 == 0) {
       
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        
        return arr[n / 2];
    }
}

int main() {
    int n;

    printf("How many integers do you want to enter: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

   
    int a[n]; 

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    printf("\nMedian of the array is %.2f\n", getMedian(a, n));

    return 0;
}