#include<stdio.h>


int main(){
    int i,sum=0,n;
    printf(" Upto how much: ",n);
    scanf("%d",&n);
 for(i=1;i<=n;i++){
     sum=sum + i;
     printf("%d",i);
 }
  printf("Total Sum = %d",sum);
return 0;
}