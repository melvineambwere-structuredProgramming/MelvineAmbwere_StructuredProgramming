#include<stdio.h>

int swapNumbers(int *a,int *b){
int ptrA=*a;
*a=*b;
*b=ptrA;
}
int main(){
    int a=5007;
    int b=3009;

printf("Values Before swapping:\n a=%d \n b=%d \n",a,b);

swapNumbers(&a,&b);
printf("Values after swapping:\n a=%d \nb=%d \n",a,b);

return 0;
}