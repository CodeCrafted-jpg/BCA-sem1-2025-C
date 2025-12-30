#include <stdio.h>

int main(){
    int a,digit;
    printf("Enter a number: ");
    scanf("%d", &a);


    while (a>0)
    {
       digit=a%10;
       printf("%d\n" , digit);
       a=a/10;
    }
    return 0;
}
