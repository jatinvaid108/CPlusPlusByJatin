#include <stdio.h>
int main(){
    int rows,columns;
    printf("Enter the rows and columns: \n");
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns];
    printf("Enter %d elements in array:- \n",rows*columns);
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("So the array after printing is: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
int main(){
    int result[3][3];
    int matrix_1[3][3],matrix_2[3][3];
    printf("Fill the elements in matrix 1: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix_1[i][j]);
        }
    }
    printf("Fill the Elements in matrix 2: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix_2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=0;
            for(int k=0;k<3;k++){
                result[i][j]+=matrix_1[i][k]*matrix_2[k][j];
            }
        }
    }
    printf("Matrix after Multiplication is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}



