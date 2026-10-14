#include<stdio.h>
 
int factorial(int n) {
    /* base case */
    if (n == 0)
        return 1;
    /* recursive step */
    return n * factorial(n - 1);
}
 
int main(void) {
    int n = 7;
    printf("%d! = %d\n", n, factorial(n));


    return 0;

}

