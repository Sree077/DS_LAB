#include <stdio.h>
void main(){
    int i,j,ar[50],size,temp;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter array elements: ");
    for (i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    for(i=1;i<size;i++){
        temp=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>temp){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
    printf("sorted array: ");
    for (i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}