#include<stdio.h>
    int rollno,maths_marks,english_marks,python_marks,c_marks,hindi_marks,sum;
    float average,cgpa;

    void getstudentdata(){
        printf("enter rollno");
        scanf("%d",rollno);
    }
    void gettotal(){
        sum = maths_marks + english_marks + python_marks + c_marks + hindi_marks;
        printf("enter maths marks:");
        scanf("%d",&maths_marks);
        printf("enter english marks:");
        scanf("%d",&english_marks);
        printf("enter pythhon marks:");
        scanf("%d",&python_marks);
        printf("enter c marks:");
        scanf("%d",&c_marks);
        printf("enter hindi marks:");
        scanf("%d",hindi_marks);

    }
    void getaverage(){
        average = sum/5;
        printf("average is:%2f",average);
       
    }
    void getcgpa(){
        cgpa = average/10;
        printf("cgpa is:%2f",cgpa);

    }
      

