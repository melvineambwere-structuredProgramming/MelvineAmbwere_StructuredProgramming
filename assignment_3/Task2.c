#include <stdio.h>
int num =10;
int *ptr;

int main(){
    ptr=&num;
    printf("Value of num: %d\n", num);
    printf("Value accessed using *ptr: %d\n", *ptr);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Address of num: %p\n", &num);
    
    return 0;
}