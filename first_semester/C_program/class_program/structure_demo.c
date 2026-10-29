#include<stdio.h>
#include<string.h>
struct students{
    int id;
    char name[10]; //name
    char contact[15];//contact
    char email[30];//email
    int pincode;//pncode
};

int main(){
    //creating structure variable 'firststudent' of type 'student'
    struct students firststudent;
    struct students secondstudent;
    struct students thirdstudent;
    firststudent.id=1;
    secondstudent.id=2;
    printf("first student id is :%d \n",firststudent.id);
    printf("second student id is :%d \n",secondstudent.id);




        

}

