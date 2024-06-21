// Find the product of all the elements in the given array: 
#include <stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the elements in the array: \n");
    int product=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            product*=arr[i][j];
        }
    }
    printf("The product of all the elements in an array is: %d ",product);
}
//similarly find the sum: 


// Given a matrix 'a' of dimension n x m and 2 coordinates (11, r1) and (12, r2). Return the sum of the rectangle from (11,r1) to (l2,r2) eg (1,1) and (4,2)
#include <stdio.h>
int main(){
    int arr[5][4];
    printf("Enter the elements in the array: \n");
    int product=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=1;i<4;i++){
        for(int j=1;j<2;j++){
            sum+=arr[i][j];
        }
    }
    printf("The sum of all the elements in an array is: %d ",sum);
}
