#include <stdio.h>
int main(){
    int arr[3][3];
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
    printf("The product of all the elements in an array is: %d ",sum);
}