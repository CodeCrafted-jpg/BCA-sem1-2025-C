#include <stdio.h>

int reverse(int num){
int reversed=0;
int rem;
while (num !=0)
{
    rem=num%10;
    reversed=reversed*10+rem;
    num =num/10;
 
}
 return reversed;

}

int main(){
int a;
int rev;
printf("Enter a number: ");
scanf("%d" ,&a);
rev=reverse(a);

if(rev==a){
    printf("The number:%d is palindrome",a);
}
return 0;
}