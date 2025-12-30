#include <stdio.h>

int sumOfProperDiv(int a){
    int sum=0;
    for (int i = 1; i <=a/2; i++)
    {
        if (a%i==0){
          sum +=i;
        }
        
    }
    return sum;
}

int main(){
    int a;
    int sum;
    printf("Enter a positive integer: ");
    scanf("%d" , &a);
    
    sum=sumOfProperDiv(a);
    
    if (sum==a)
    {
        printf("%d is a perfect number", a);

    }else{
        printf("%d is not a perfect number" ,a);
    }
    
}