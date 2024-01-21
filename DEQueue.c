#include <stdio.h>
void main(){
    int ar[10],ch,i,front=-1,rear=-1,item;
    do{
        printf("Choices\n");
        printf("1)Insert Right\n");
        printf("2)Delete Left\n");
        printf("3)Insert Left\n");
        printf("4)Delete Right\n");
        printf("5)Display\n");
        printf("6)Exit\n");
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
                if (front==0){
                    printf("Overflow!!!\n");
                }
                else if(front==-1){
                    printf("Enter element: ");
                    scanf("%d",&item);
                    front++;
                    ar[front]=item;
                }
                else{
                    printf("Enter element: ");
                    scanf("%d",&item);
                    front--;
                    ar[front]=item;
                }
                break;
            case 4:
                if (rear==-1){
                    printf("Underflow\n");
                }
                else if(front==rear){
                    printf("Deleted element is %d\n",ar[rear]);
                    front=rear=-1;
                }
                else{
                    printf("Deleted element is %d\n",ar[rear]);
                    rear--;
                }
                break;
            case 5:
                printf("Elements are: ");
                for (i=front;i<=rear;i++){
                    printf("\n%d",ar[i]);
                }
                printf("\n");
                break;
        }
    }while(ch!=6);
}
