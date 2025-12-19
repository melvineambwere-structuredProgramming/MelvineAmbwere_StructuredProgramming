#include<stdio.h>
int value(int num){
num=num+3009;
printf("value outside main:\n %d",num);
}

int reference(int *num){
*num=*num + 3009;
printf("Reference outside main:\n%d",*num);
}

int main(){
    int a=5007;
    printf("a=%d",a);
    
    value(a);
    printf("After increment function:%d\n",a);

    reference(&a);
    printf("After reference function:%d\n",a);

    return 0;
}