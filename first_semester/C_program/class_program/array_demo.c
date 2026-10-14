// program to store and display 5 subject mark
#include<stdio.h>

int main(){
    int my_marks[5];                  // declare a integer array of size 5 
    int sub_marks[5]; // this statement declare an array 'sub_marks' 
    // with size of 'int' type 
    // storing data/ array initialization - array_name[index]=data/value;
    sub_marks[0]=80; // stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88; // starting array initialization 


    printf("first sub marks:%d\n",sub_marks[0]);
    printf("second sub marks:%d\n",sub_marks[1]);
    printf("third sub marks:%d\n",sub_marks[2]);
    printf("fourth sub marks:%d\n",sub_marks[3]);
    printf("fifth sub marks:%d\n",sub_marks[4]);

    // dynamic initialization of 'my_marks'
    for (int i=0; i<5;i++){
        printf("enter %d subject marks:[int data]",i+1);
        scanf("%d",&my_marks[i]); // stored in first location
z

    }
    
 


    






}