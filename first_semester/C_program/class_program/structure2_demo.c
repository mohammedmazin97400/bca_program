#include<stdio.h>

// global array of structure 'students' with size 5
//can be accessed in any method. global scope

{
    /* data */
};


struct student{
    int rollno;
    char name[20];
    int subjectmarks[3];
    int total;              // to store total marks 
    float percentage;       // to store average marks

  


};
  struct  student students[5];
// method to initialization 5 student
 struct student initialization_student(){
    struct  student student_list[5];
    for (int i=0;i<5;i++){
        printf("enter %d student data :",i++);
        printf("enter student rollno:");
        scanf("%d",&student_list[i].rollno);
        printf("enter student name:");
        scanf("%s",&student_list[i].name);
        // to collect 3 subject marks 
        for (int j=0;j<3;j++){
            printf("enter %d subject marks");
            scanf("%d",&student_list[i].subjectmarks[j]);
            

        }

   
        
    }

    // to find total marks of 3 subject
    int gettotal(){
        for (int  i = 0; i < 5; i++)
        {
            students[i].total=students[i].marks[0]+students[i].marks[1]+students[i].marks[2];
            
        }

          

    }
    float getaverage(){
        for(int i=0; 1<5; i++)
        {
            students[i].average=students[i].total[0]+students[i].total[1]+students[i].total[2];

        }


    }



     
    



    



}
int main(){

    // to store the data of first student


    //array of structure variable
    initialization_student();
    gettotal();
    getaverage();   
    printf("roll no\t\ name\t\ sub_marks\t\");
    display_student(); //
        
  


    
    

}