#include<stdio.h>
int main(){
    int x =10;
    int *p;
    p=&x;

    printf("%d\n",x);
    printf("%P\n",&x);
    printf("%p\n",p);

}