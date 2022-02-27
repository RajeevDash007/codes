#include<stdio.h>


int main(){
  int i,cube,n;
  printf("Enter number of terms:\t");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
      cube=i*i*i;
     printf("Cube of %d is %d\n",i,cube);
  }

return 0;
}