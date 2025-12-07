#include <stdio.h>
#include <stdlib.h>
int correctPIN=6474;
int userPIN;
int attempts;
int options;
int currentBalance=200;
int Amount;


int checkBalance(){
printf("Your current Balance is:$%d\n",currentBalance);
return 0;
}
int Deposit(){
int Deposit;
if(Deposit<0){
    printf("Enter a Valid amount!");

}
else{
printf("How much are you depositing?");
scanf("%d",&Deposit);
Amount = currentBalance + Deposit;
currentBalance=Amount;
printf("Your Account has been credited: +%d\n",Deposit);
printf("Your new Balance is:$%d\n",Amount);
}

return 0;
}
int debit(){
int withdraw;
int Remainder;
printf("How Much would you like to withdraw?..\n");
scanf("%d",&withdraw);

if(withdraw>currentBalance){
    printf("Insufficient Funds!..\n");
    printf("Your current Balance is:$%d\n",currentBalance);

}
else{
Remainder=currentBalance-withdraw;
currentBalance=Remainder;
printf("$%d Has been removed from your account..\n",withdraw);
printf("Your Remaining Balance is:$ %d\n",Remainder);
}
return 0;
}

int login(){
printf("Welcome!..\n");
for(attempts=1;attempts<=3;attempts++){
printf("Please Enter your PIN!..\n");
scanf("%d",&userPIN);
if(userPIN==correctPIN){
    printf("TRUE..\n");
    printf("Access Granted..\n");
    while(1){
        printf(
    "Select an option below:\n"
    "1. Balance Inquiry\n"
    "2. Deposit\n"
    "3. Withdraw\n"
    "4. Exit\n"
);

scanf("%d",&options);
switch(options){
    case 1:
    checkBalance();
    break;
    case 2:
    Deposit();
    break;
    case 3:
    debit();
    break;
    case 4:
    return 0;

    default:
        printf("Invalid Option!");

}

    }

return 0;
}
else{
    printf("FALSE..\n");
    printf("Access denied..\n");
}


} if(attempts>3){
     printf("Too many attempts! ");}
}



int main()
{
login();
    return 0;
}
