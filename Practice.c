#include <stdio.h>


int main(){
   int a[100][100],b[100][100],c,r,sum[100][100];

   printf("enter n");
   scanf("%d%d", &c,&r);

   for (int i = 0; i < c; i++)
   {
    for (int j= 0; j < r; j++)
    {
        scanf("%d" ,&a[i][j]); 
    }
    
     
   }
    for (int i = 0; i < c; i++)
   {
    for (int j= 0; j < r; j++)
    {
        scanf("%d" ,&b[i][j]); 
    }
    
     
} 

printf("sum: ");
 for (int i = 0; i < c; i++)
   {
    for (int j= 0; j < r; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
    
     
   }



     printf("Sum of the two matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

   
   
   
}