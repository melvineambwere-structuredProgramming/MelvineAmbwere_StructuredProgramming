#include <stdio.h>
#define pi 22/7
int main(){
    // r=radius Sa=surface area
    
float r,Sa;

printf("Enter radius:");
scanf("%f",&r);
Sa=pi * 4/3 * r * r;

printf("The surfaceArea of the sphere is:%f.1\n",Sa);
}