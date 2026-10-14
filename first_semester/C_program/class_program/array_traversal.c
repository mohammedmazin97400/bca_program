#include<stdio.h>
int main(){
    int array_size = read_array_size(); // calling method and stores returned value
    int isvalidate=validate_array_size(array_size);  //passing 'array_size'; int array_size = arraysize 
    if (isvalidate == 0){
        
    }
}
//reads the size of array 
int read_array_size(){
    int array_size; // local variable 
    printf("entr the array size[>4]:");
    scanf("%d",&array_size);
    return array_size;
}

int validate_array_size(int array_size){
    if(array_size > 4){ 
        return 1;

    }
    return 0;

}