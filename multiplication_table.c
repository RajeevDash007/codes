#include <stdio.h>
void main()
{
   int i,n;
   printf("Which table you want?::\t ");
   scanf("%d",&n);
   
   for(i=1;i<=10;i++)
   {
     printf("%d X %d = %d \t",n,i,n*i);
   }
} 