#include<stdio.h>
int num1=3009;
int num2=5007;
int *ptr1;
int *ptr2;
int sum;
int main(){
    ptr1=&num1;
    ptr2=&num2;
sum = *ptr1 + *ptr2;
printf("The sum is:%d",sum);

return 0;
}