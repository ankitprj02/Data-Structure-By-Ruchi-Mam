// Insertion of An Element in An Array
#include <stdio.h>

int main() {
    int i,arr[100],n,num,pos;
    
    // Input number of elements in the array
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    // input array element
    printf("Enter the elements of the array: ");
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    // input the number to be inserted 
    printf("Enter the the number you want to insert: ");
    scanf("%d",&num);
    
    
    // input the position where you want to insert the new element
    printf("Enter the position : ");
    scanf("%d",&pos);
    
    // Shift elements right to make space  fornew element
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    
    // Insert the new element at the specific position
    arr[pos-1]=num;
    
    // increment of the size of the array
    n++;
    
    // Display the updated array
    printf("Elements of the array are: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
