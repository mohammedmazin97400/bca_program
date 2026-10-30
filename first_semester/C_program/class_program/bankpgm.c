#include <stdio.h>
int main(){
    int accountno = 1000;
    float balance = 500;
    int choice;
    int deposit;
    int withdraw;
    int accountview;
    int option;
    printf("-----welcome to my bank------\n");
    printf("1deposit\n");
    printf("2withdraw\n");
    printf("3account view\nposit;");
    printf("4exit\n");
    printf("enter your option\n");
    scanf("%d", &option\n);
    switch (option){
    case 1:
        printf("enter your amount no:");
        scanf("%d", &useraccountno);
        if (accountno = useraccountno){
        balance = balance + deposit;
        printf("account updated sucessfully");
        printf("balance %",balance);
        printf("++")
        break;
    case 2:
        printf("enter your amount");
        scanf("%d", &withdraw);
        balance = balance - withdraw;
        printf("account withdraw sucessfully");
        break;

    case 3:
        printf("amount %f",balance);

            /* code */
            break;

    default:
        break;
    }
    return 0
}