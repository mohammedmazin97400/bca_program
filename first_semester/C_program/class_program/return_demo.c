#include<stdio.h>
    int rollno,maths_marks,english_marks,python_marks,c_marks,hindi_marks,sum;
    float average,cgpa;

    int getstudentdata(){
        printf("enter rollno");
        scanf("%d",&rollno);
        return rollno;
    }

    int gettotal(){
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
        return  sum;


    }
    float getaverage(){
        average = sum/5;
        
        return average;

       
    }
    float getcgpa(){
        cgpa = average/10;
        
        return cgpa;

    }
    
    int main(){
        int rollno = getstudentdata();
        int total = gettotal();
        float average = getaverage();
        float cgpa = getaverage();

        printf("------------------\n");
        printf("rollno is %d\n",rollno);
        printf("total is %d\n",total);
        printf("average is %.2f\n",average);
        printf("cgpa is %2f\n",cgpa);
    }    