#include <stdio.h>

#define SIZE 10 // Define the size of the deque

void main() {
    int ar[SIZE], ch, i, front = -1, rear = -1, item;
    do {
        printf("Choices\n");
        printf("1) Insert Right\n");
        printf("2) Delete Left\n");
        printf("3) Insert Left\n");
        printf("4) Delete Right\n");
        printf("5) Display\n");
        printf("6) Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: // Insert Right
                if ((rear + 1) % SIZE == front) {
                    printf("Overflow\n");
                } else {
                    printf("Enter element: ");
                    scanf("%d", &item);
                    if (rear == -1) { // Empty deque
                        front = rear = 0;
                    } else {
                        rear = (rear + 1) % SIZE;
                    }
                    ar[rear] = item;
                }
                break;
            case 2: // Delete Left
                if (front == -1) {
                    printf("Underflow\n");
                } else {
                    printf("Element %d removed\n", ar[front]);
                    if (front == rear) { // Only one element was present
                        front = rear = -1;
                    } else {
                        front = (front + 1) % SIZE;
                    }
                }
                break;
            case 3: // Insert Left
                if ((rear + 1) % SIZE == front) {
                    printf("Overflow!!!\n");
                } else {
                    printf("Enter element: ");
                    scanf("%d", &item);
                    if (front == -1) { // Empty deque
                        front = rear = 0;
                    } else {
                        front = (front - 1 + SIZE) % SIZE;
                    }
                    ar[front] = item;
                }
                break;
            case 4: // Delete Right
                if (rear == -1) {
                    printf("Underflow\n");
                } else {
                    printf("Deleted element is %d\n", ar[rear]);
                    if (front == rear) { // Only one element was present
                        front = rear = -1;
                    } else {
                        rear = (rear - 1 + SIZE) % SIZE;
                    }
                }
                break;
            case 5: // Display
                if (front == -1) {
                    printf("Deque is empty\n");
                } else {
                    printf("Elements are: ");
                    for (i = front; i != rear; i = (i + 1) % SIZE) {
                        printf("%d ", ar[i]);
                    }
                    printf("%d\n", ar[i]); // Print the last element
                }
                break;
        }
    } while(ch != 6);
}
