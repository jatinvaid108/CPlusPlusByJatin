//Wap to add two Matrix
//Remember two matrix can only be added if Both the matrices have equal no of rows and columns:-

#include <stdio.h>
int main(){
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];
    printf("Enter the elements in the matrix 1 : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the elements in the matrix 2 : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("Matrix obtained after the addition : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
}

//Find the largest element in the Matrix or 2d array :-
#include <stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the elements in the matrix 1 : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    printf("The largest element in the 2D array is: %d ",max);
}


//Find the Minimum element in the Matrix or 2d array :-