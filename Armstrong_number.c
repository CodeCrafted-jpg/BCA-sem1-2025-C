#include <stdio.h>
#include <math.h>
int arms(int a){
int n=0,rem;
int temp=a;
double res;
while (temp!=0)
{
    temp /=10;
    n++;
}

temp=a;
while (temp!=0)
{
    rem=temp % 10;
    res+=pow(rem, n);
    temp /=10;
}
return (int) res;

}
int main(){
int num;
int sum;
printf("Enter a number: ");
scanf("%d", &num);
sum=arms(num);
if (sum==num)
{
    printf("The entered number %d is an armsstrong number: " , num);
}else{
    printf("The entered number %d is not an armsstrong number: ", num);
}
return 0;
}