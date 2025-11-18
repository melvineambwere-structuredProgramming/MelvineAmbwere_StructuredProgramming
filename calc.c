#include <stdio.h>
int main(){
float num1,num2;
printf("Enter num1");
scanf("%f",&num1);
printf("Enter num2");
scanf("%f",&num2);

    // Summation
printf("Addition:%f\n",num1+num2);
printf("Subtraction:%f\n",num1-num2);
printf("Multiplication:%f\n",num1*num2);
  
if (num2 !=0){
    printf("division:%f\n",num1/num2);
    printf("modulus: %d\n",(int)num1%(int)num2);
} else{
    printf("Cannot divide a number by zero");
}

return 0;
}