#include <stdio.h>
int main(){
    int number = 0;
    int i = 5;
    int sum = 0;

  
    

printf("enter a number:");
scanf("%d", &number);

if (number > 5){
    for (i =5; i <= number; i++){
        sum=sum+i;

    }
    printf("the sumof from 5 to %d is:%d \n", number,sum );


}
else{
    printf("please enter a number >5\n");
}

}
