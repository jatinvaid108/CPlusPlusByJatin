// Multiplication of Array :--

#include <stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],result[3][3];

    printf("Enter the elements in array : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements in array2 : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Here is the product of the two matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=0;
            for(int k=0;k<3;k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}

// Sum of Array :---
#include <stdio.h>
int main(){
    int n;
    printf("Enter the elements in array : \n");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("The sum of array is : %d\n",sum);
}
//Using functions 
#include <stdio.h>
int sum(int arr[50],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("The sum of the array is %d\n",sum);
}
int main(){
    int arr[50],size;
    printf("Enter the size of the array \n");
    scanf("%d",&size);
    printf("Enter array element : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,size);
    return 0;
}