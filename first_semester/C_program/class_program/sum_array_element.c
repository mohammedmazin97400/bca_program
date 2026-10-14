#include <stdio.h>
// get_array_sum() defination
// int number[]=mynumber
int get_array_sum(int number[]){
    int sum;
    for(int i=0; i<5;i++){
        sum=sum + number[i]; 
       
    }
    return sum;
}
int main(){
    int my_number[5];
    for(int i=0; i<5;i++){
        printf("enter the %d number :",i+1);
        scanf("%d",&my_number[i]);
    }
    // calculate the sum and return sum
    int total = get_array_sum(my_number);
    printf("the sum is %d",total);
    
return 0;
}