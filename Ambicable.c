// Two numbers are called Amicable Numbers if the sum of the proper divisors 
// of the first number is equal to the second number, and the sum of the proper 
// divisors of the second number is equal to the first.

// A "proper divisor" is any factor of the number excluding the number itself.

#include <stdio.h>

int sumOfDivisor(int num){
    int sum=0;
for (int i = 1; i <= num/2; i++)
{
    if(num%i==0){
    sum +=i;
    }
}
return sum;
}

int main(){
int a,b;
int sum1,sum2;
printf("Enter two numbers: ");
scanf("%d%d" , &a,&b);
sum1=sumOfDivisor(a);
sum2=sumOfDivisor(b);

if (sum1==b && sum2==a)
{
    printf ("the numbers %d and %d are Ambicable numbers" ,a,b);
}
else
 printf ("the numbers %d and %d are not Ambicable numbers" ,a,b);

}