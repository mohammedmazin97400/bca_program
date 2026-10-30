//c pgm to demo nestead if else 
// pgm to issue dl
#include<stdio.h>
int main(){
    
    
    
    int age;
    int isindian;
    int istestcleared;
    int paidfee;

    printf("enter you age\n");
    scanf("%d" ,&age);


    printf("enter your indian , [yes-1 ,no-0]\n");
    scanf("%d" , &isindian);

    printf("did you clear your test , [yes-1 , no-0]\n");
    scanf("%d" , &istestcleared);


    printf("how much fees did you pay\n");
    scanf("%d" , &paidfee);


    if(age>=18){
        if(isindian){
            if(istestcleared){
                if(paidfee==500){
                    printf("dl can be issued");
                }
                else{
                    printf("your DL cannot be issued");
                }
            }
            else{
                printf("your DL cannot be issued");
            }
        }
        else{
            printf("your DL cannot be issued");
        }
    }
    else{
        printf("your DL cannot be issued");
    }

    return 0;
}    

