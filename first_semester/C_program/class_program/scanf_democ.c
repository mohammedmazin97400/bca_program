//to demo scanf()
#include<stdio.h>
int main(){
printf("welcome to addition program \n");
int firstnumber = 0;
int secondnumber = 0;
int sum = 0;
int difference=0;
int multiflication=0;
float division=0;

printf("enter the firstnumber");
scanf("%d", &firstnumber);

printf("enter the secondnumber");
scanf("%d", &secondnumber);

sum= firstnumber + secondnumber;
printf("the sum of %d and %d is =%d\n", firstnumber, secondnumber,sum);

difference = firstnumber - secondnumber;
printf("the difference of %d and %d is =%d\n",firstnumber, secondnumber,difference);

multiflication= firstnumber* secondnumber;
printf("the multiflication of %d and %d is=%d\n",firstnumber,secondnumber,multiflication);

division=firstnumber/ secondnumber;
printf("the division of %d and %d is=%.2f\n", firstnumber,secondnumber,division);
}