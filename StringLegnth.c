#include <stdio.h>
#include <string.h>

int main(){
    char Name[50];
    printf("Enter Your Name:");
    scanf("%s", &Name);
    printf("Your name is: %s!\n", Name);
    printf("The legnth of your name is: %lu\n" ,strlen(Name));

    return 0;
    
}