#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node*link;
    } *first=NULL,*cur,*temp;
void main(){
    int ch,num,pos,i;
    do{
        printf("\t Choices:\n");
        printf("1) Insert first\n");
        printf("2) Insert last\n");
        printf("3) Insert between\n");
        printf("4) Delete first\n");
        printf("5) Delete last\n");
        printf("6) Delete between\n");
        printf("7) Display Elements\n");
        printf("8) Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                temp=(struct node*)malloc(sizeof(struct node));
                printf("Enter element to be inserted: ");
                scanf("%d",&num);
                temp->data=num;
                if (first==NULL){
                    temp->link=NULL;
                    first=temp;
                }
                else{
                    temp->link=first;
                    first=temp;
                }
                break;
            case 2:
                temp=(struct node*)malloc(sizeof(struct node));
                printf("Enter elemented to be inserted: ");
                scanf("%d",&num);
                temp->data=num;
                if (first==NULL){
                    first=temp;
                    temp->link=NULL;
                }
                else{
                    cur=first;
                while(cur->link!=NULL){
                    cur=cur->link;
                }
                cur->link=temp;
                temp->link=NULL;
                }
                break;
            case 3:
                temp=(struct node*)malloc(sizeof(struct node));
                if(first==NULL){
                    printf("List is empty!!!\n");
                    break;
                }
                else{
                    printf("Enter data: ");
                    scanf("%d",&num);
                    printf("Enter position to insert: ");
                    scanf("%d",&pos);
                    temp->data=num;
                    cur=first;
                    for (i=1;i<pos-1;i++){
                        if (cur->link==NULL){
                            printf("Not enough elements\n");
                            break;
                        }
                        cur=cur->link;
                    }
                    temp->link=cur->link;
                    cur->link=temp;
                }
                break;
            case 4:
                if (first==NULL){
                    printf("List is empty!!!\n");
                }
                else{
                    cur=first;
                    first=cur->link;
                    printf("Deleted element is: %d\n",cur->data);
                    free(cur);
                }

                break;
            case 5:
                if (first==NULL){
                    printf("List is empty!!!");
                    break;
                }
                else{
                    cur=first;
                    while(cur->link->link!=NULL){
                        cur=cur->link;
                    }
                    printf("Deleted element is: %d\n",cur->link->data);
                    free(cur->link);
                    cur->link=NULL;

                }
                break;
            case 6:
                if(first==NULL){
                    printf("List is empty!!!\n");
                    break;
                }
                else{
                    cur=first;
                    printf("Enter position to delete: ");
                    scanf("%d",&pos);
                    for(i=1;i<pos-1;i++){
                        if(cur->link==NULL){
                            printf("There are less elements!!!\n");
                            break;
                        }
                        cur=cur->link;
                    }
                    printf("Deleted element is: %d\n",cur->link->data);
                    cur->link=cur->link->link;
                }
                break;
            case 7:
                if(first==NULL){
                    printf("List is empty!!!");
                    break;
                }
                else{
                printf("Elements are: ");
                cur=first;
                while(cur!=NULL){
                    printf("%d ",cur->data);
                    cur=cur->link;
                }
                }
                printf("\n");
                break;
        }
    } while(ch!=8);

}