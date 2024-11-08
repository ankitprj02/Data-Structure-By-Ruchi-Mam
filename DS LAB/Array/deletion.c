// Deletion of an element in an array
#include <stdio.h>

int main() {
    int i,n,arr[100],num,pos;
    
    // Input size of the An Array
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    
    // input array element
    printf("Enter the elements of the array: ");
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    -
    // input the position you want to delete the element
    printf("Enter the number to delete : ");
    scanf("%d",&num);
    
    // find the position of the element to be deleted
    for(i=0;i<n;i++){
        if(arr[i]==num){
            pos=i;
            break;
        }
    }
    
    // shift the elements left to fill the gap
    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    // Decrement of the array
    n--;
    
    // Display the updated array
    printf("Elements of the array are: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    
    return 0;
}
