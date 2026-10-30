#include <stdio.h>
#include <stdlib.h> 

#define SIZE 5

// Global variables 
int queue[SIZE];
int front= -1,rear=-1; 

// Case 1: Method definition for enqueue
void enqueue(int newdata) {
    if (rear == SIZE - 1) {
        printf("queue overflow! cannot enqueue %d\n\n", newdata);
    } 
    else {
        rear++;
        queue[rear] = newdata;
        printf("%d is added to the top of the queue\n\n", newdata);
    }
}

// Case 2: Method definition for dequeue
void dequeue() {
    if (front==-1 || front>rear) {
        printf("queue underflow! No elements to dequeue.\n\n");
    } 
    
        printf("removed element: %d\n", queue[front]);
        front--; 
    
}

// Case 3: Method definition for display
void display() {
    if (front == -1) {
        printf("queue is empty.\n");
    } 
    else {
        printf("Current queue elements (top to bottom):\n");
        for (int i = rear; i >= 0; i--) {
            printf("| %d |", queue[i]);
        }
        printf("-----\n\n");
    }
}
int main() {
    int option;
    int mydata;
    do {
        printf("1.enqueue data\n");
        printf("2.dequeue data\n");
        printf("3.display data\n");
        printf("4.exit\n");
        printf("enter your choice: ");
        scanf("%d", &option);
        printf("\n"); 

        switch (option) {
            case 1:
                printf("enter the queue data: ");
                scanf("%d", &mydata);
                enqueue(mydata);
                break;
                
            case 2:
                dequeue();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exiting program...\n");
                exit(0); 
                
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (option != 4);

    return 0;
}