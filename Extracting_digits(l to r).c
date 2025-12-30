#include <stdio.h>



int main(){
      int a;
      printf("Enter a number: ");
      scanf("%d" , &a);
      char str[20];
      
      sprintf(str, "%d" , a);

      for (int i = 0; str[i] != '\0'; i++)
      {
        printf("%c\n",str[i]);
      }
      return 0;
}