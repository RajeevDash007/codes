#include<stdio.h>


int main(){
    int num1,num2,sum,num3;

    printf("YOUR 1st NUMBER\n");
    scanf("%d",&num1);
    
    printf("YOUR 2nd NUMBER\n");
    scanf("%d",&num2);
    
    printf("YOUR 3rd NUMBER\n");
    scanf("%d",&num3);

    sum = num1 + num2 + num3;
    
    printf("result = %d", sum);

return 0;
}