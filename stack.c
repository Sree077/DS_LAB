#include <stdio.h>
void main(){
    int ar[10],top=-1,ch,item,i;
    do{
    printf("Choices: \n");
    printf("1)Push\n");
    printf("2)Pop\n");
    printf("3)Display\n");
    printf("4)Exit\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            if (top==9){
                printf("OVERFLOW\n");
            }
            else{
                printf("Enter the element to be inserted: ");
                scanf("%d",&item);
                top++;
                ar[top]=item;
            }
            break;
        case 2:
            if(top==-1){
                printf("UNDERFLOW\n");
            }
            else{
                printf("Element popped is: %d\n",ar[top]);
                top--;
            }
            break;
        case 3:
            if(top==-1){
                printf("Stack is empty!!!.\n");
            }
            else {
                printf("Elements in stack are: ");
                for(i=top;i>=0;i--){
                printf("%d\n",ar[i]);
                }
            }
            break;
        default:
            printf("Enter correct choice!!!\n");
    }
    }while(ch!=4);
}