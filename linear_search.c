#include<stdio.h>
void main(){
    int ar[50],i,j,flag=0,size,num,pos;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter array: ");
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if (ar[i]==num){
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at %d !!!",pos);
    }
    else{
        printf("Element not found!!!");
    }

}