#include<stdio.h>
#include<string.h>
int main(){
    char name[6] = "goat";
    char namee[30];
    printf("enter your first name");
    fgets(namee,sizeof(namee),stdin);
    printf("hello, %s!\n",namee);

    printf("%s",name);

}