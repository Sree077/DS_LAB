#include <stdio.h>
void main(){
    int ar[5],i,rear=-1,front=-1,ch,item;
    do{
        printf("Choices: \n");
        printf("1)Enque.\n");
        printf("2)Deque.\n");
        printf("3)Display.\n");
        printf("4)Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    if(front==(rear+1)%5){
                        printf("Overflow!!!\n");
                    }
                    else if(rear == -1 && front == -1){
                        printf("Enter element: ");
                        scanf("%d",&item);
                        front = rear = 0;
                        ar[rear]= item;
                    }
                    else{
                        printf("Enter element: ");
                        scanf("%d",&item);
                        rear = (rear+1)%5;
                        ar[rear]= item;
                    }
                    break;
            case 2:
                    if (front == -1){
                        printf("Underflow!!!\n");
                    }
                    else if(front == rear){
                        printf("Element deleted is: %d\n",ar[front]);
                        front = rear = -1;
                    }
                    else{
                        printf("Element deleted is: %d\n",ar[front]);
                        front = (front+1)%5;
                    }
                    break;
            case 3:
                    if(front == -1) {
                        printf("Queue is empty.\n");
                    } 
                    else {
                        printf("Elements are: \n");
                        for(i = front; i != rear; i = (i + 1) % 5) {
                            printf("%d\n", ar[i]);
                        }
                        printf("%d\n", ar[i]); // Print the last element
                    }

                    break;

        }
    }while(ch != 4);
}