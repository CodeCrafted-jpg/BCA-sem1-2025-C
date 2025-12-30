#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int a){
if (a<=1)return false;

for ( int i = 2; i < sqrt(a); i++)
{
    if (a%i==0)
    {
        return false;
    }
}
return true;

}

int main(){
    int a;
    printf("Enter  a number: ");
    scanf("%d" , &a);

    if (isPrime(a))
    {
        printf("The number %d is prime" , a);
    }
    else{
        printf("The number %d is prime" , a);
    }
    return 0;
}