#include<stdio.h>
int count=10;
int *pCount;
int main(){
    pCount=&count;
    *pCount=count + 10;
   
    printf("The updated Value of Count is:%d",count);

    return 0;
}