#include<stdio.h>
void display(); //function prototype 

int main(){
    int a;
    printf("This is intializing display\n");
    display();
    printf("display function finished its work\n");

return 0;
}
void display(){
    printf("This is a display\n");
}