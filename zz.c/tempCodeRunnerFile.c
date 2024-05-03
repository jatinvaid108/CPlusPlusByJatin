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