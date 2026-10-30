#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Function declarations
void enqueue(int value);
void dequeue();
void display();

// Enqueue operation
void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full!\n");
        return;
    }

    // Insert new data
    if (front == -1)
    {
        front = 0;
    }

    rear++;
    queue[rear] = value;

    printf("%d inserted into the queue.\n", value);
}

// Dequeue operation
void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);

        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

// Display operation
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// Main function
int main()
{
    int option, data;

    do
    {
        printf("\n----- QUEUE OPERATIONS -----\n");
        printf("1. Enqueue data\n");
        printf("2. Dequeue data\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Enter the queue data: ");
                scanf("%d", &data);

                enqueue(data);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Thank you!\n");b   
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (option != 4);

    return 0;
}