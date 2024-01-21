#include <stdio.h>
void main(){
    int ar[10],ch,i,front=-1,rear=-1,item;
    do{
        printf("Choices\n");
        printf("1)Enque\n");
        printf("2)Deque\n");
        printf("3)Display\n");
        printf("4)Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if (rear==9){
                    printf("Overflow\n");
                }
                else if(rear==-1){
                    printf("Enter element: ");
                    scanf("%d",&item);
                    front=rear=0;
                    ar[rear]=item;
                }
                else{
                    printf("Enter element: ");
                    scanf("%d",&item);
                    rear++;
                    ar[rear]=item;
                }
                break;
            case 2:
                if (front==-1){
                    printf("Underflow\n");
                }
                else if(front==rear){
                    printf("Element %d removed\n",ar[front]);
                    front=rear=-1;
                }
                else{
                    printf("element %d removed\n",ar[front]);
                    front++;
                }
                break;
            case 3:
                printf("Elements are: ");
                for (i=front;i<=rear;i++){
                    printf("\n%d",ar[i]);
                }
                printf("\n");
                break;
        }
    }while(ch!=4);
}
