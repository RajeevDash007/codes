#include<stdio.h>

void pointArray(int *ptr, int n){
 for (int i = 0; i < n; i++)
    {
        printf("The value of elements %d is %d\n", i+1,*(ptr+1));
    }
    
}
int main(){
   int arr[] = {1,2,3543,34,3,645,23};
   pointArray(arr,7);

 return 0;
}