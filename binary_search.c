#include <stdio.h>
void main(){
    int ar[50],i,size,item,pos=-1,left,right,mid;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for (i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    left = 0;
    right = size-1;
    printf("Enter element to search: ");
    scanf("%d",&item);
    while (left<=right){
        mid = left + (right-left)/2;
        if (ar[mid]<item){
            left = mid + 1;
        }
        else if (ar[mid]> item){
            right = mid - 1;
        }
        else{
            pos = mid;
            break;
        }
    }
    if (pos == -1){
        printf("Element not found!!!");
    }
    else{
        printf("Element found at %d position",pos+1);
    }
}