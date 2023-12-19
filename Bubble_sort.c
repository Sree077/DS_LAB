#include <stdio.h>
void main(){
    int i,j,ar[50],size,temp;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter array elements: ");
    for (i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for (i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}