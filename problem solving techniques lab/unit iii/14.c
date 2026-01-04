//  Compute maximum, minimum, sum and average of a sequence of numbers which are 
// read using sentinel controlled repetition using only few variables? 
#include <stdio.h>
#include <float.h> // For DBL_MAX and DBL_MIN

int main() {
    double current, sum = 0, avg, max, min;
    int count = 0;
    double sentinel = -1;

    printf("Enter numbers (enter %g to stop):\n", sentinel);

    
    if (scanf("%lf", &current) != 1 || current == sentinel) {
        printf("No numbers were entered.\n");
        return 0;
    }

    
    max = min = sum = current;
    count = 1;

    while (1) {
        scanf("%lf", &current);
        
        if (current == sentinel) {
            break; 
        }

        sum += current;   
        count++;          

        
        if (current > max) max = current;
        if (current < min) min = current;
    }

    avg = sum / count;

    printf("\n--- Results ---\n");
    printf("Numbers entered: %d\n", count);
    printf("Maximum: %.2f\n", max);
    printf("Minimum: %.2f\n", min);
    printf("Sum    : %.2f\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}