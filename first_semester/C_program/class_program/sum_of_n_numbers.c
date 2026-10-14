#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Take the value of n from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check whether n is greater than 5
    if (n > 5)
    {
        // Start from 5 and add numbers up to n
        for (i = 5; i <= n; i++)
        {
            sum = sum + i;
        }
        // Display the final sum
        printf("Sum of numbers from 5 to %d = %d", n, sum);
    }
    else
    {
        // Display error message when n is 5 or less
        printf("Error: Please enter a number greater than 5.");
    }
    return 0;
}