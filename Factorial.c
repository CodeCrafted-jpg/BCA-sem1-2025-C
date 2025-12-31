#include <stdio.h>

int main(){
    int a;
    int fac=1;
    printf("Enter a number: ");
    scanf("%d", &a);


   
   for (int i = 1; i <=a; ++i)
    {
        fac *=i;
        
    }
    printf("Factorial of %d = %llu\n",a, fac);
   
   
    
    return 0;
}