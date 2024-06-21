//WAP to store roll no and marks obtained by four students side by side in a matrix
#include <stdio.h>
int main(){
    int roll=4,marks=2;
    int matrix[roll][marks];
    printf("Enter the roll and marks of students: \n");
    for(int i=0;i<roll;i++){
        for(int j=0;j<marks;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The final list of marks of respective students: \n");
    for(int i=0;i<roll;i++){
        for(int j=0;j<marks;j++){
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}


//WAP to store 10 at every index of 2d matrix of 5 rows and 5 columns 
#include <stdio.h>
int main(){
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matrix[i][j]=10;
        }
    }
    printf("The final Matrix \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}