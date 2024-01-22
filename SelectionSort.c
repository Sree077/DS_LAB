#include <stdio.h>
void main(){
    int i,j,ar[50],size,temp,min;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter array elements: ");
    for (i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(ar[j]<ar[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=ar[min];
            ar[min]=ar[i];
            ar[i]=temp;
        }
    }
    printf("Sorted Array is: ");
    for(i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}