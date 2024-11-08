// Traversal of an array
#include <stdio.h>

int main() {
    int i,n,arr[100];
    
    // Input size of the An Array
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    
    // input array element
    printf("Enter the elements of the array: ");
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    -
    // Display the elements of the array
    printf("Elements of the array are: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
