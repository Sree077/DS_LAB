#include <stdio.h>
void main(){
    
    int ar[50],first,last,mid,size,num,flag=0;
    printf("Enter size: ");
    scanf("%d",&size);
    printf("Enter elements(in assending order): ");
    for (int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&num);
    first=0;
    last=size-1;
    while(first<=last){
        mid=first+(last-first)/2;
        if(ar[mid]==num){
            printf("Element found\n");
            flag=1;
            break;
        }
        else if(ar[mid]<num){
            first=mid+1;
        }
        else if(ar[mid]>num){
            last=mid-1;
        }
        
    }
    if(flag==0){
        printf("Element not found\n");
    }

}