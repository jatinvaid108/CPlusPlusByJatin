// Inserting an element 
#include <stdio.h>
void insertelement(int arr[],int size,int pos,int ele){
    int i;
    for(i= size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/4;
    int pos,ele;
    printf("Enter the position and element to be inserted \n");
    scanf("%d %d",&pos,&ele);
    insertelement(arr,size,pos,ele);
    printf("Array after insertion: \n");
    for (int i = 0; i < size+1; i++) {
        printf("%d ", arr[i]);
    }
}

#include <stdio.h>
void deleteElement(int arr[], int size, int pos){
    int i;
    for (i = pos; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
}
// Deleting element 

int main() {
    int arr[10] = {2, 3, 45, 6, 8, 9, 5, 6, 2, 7, 6};
    int size = 11, pos;

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    deleteElement(arr, size, pos);

    printf("Array after deletion: ");
    for (int i = 0; i < size-1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Updating an element

#include <stdio.h>
int main(){
    int i,position,new_val;
    int arr[]={2,3,45,6,8,9,5,6,2,7,6};
    int size=sizeof(arr)/4;
    printf("Enter the position to update element \n");
    scanf("%d",&position);
    printf("Enter the new value \n");
    scanf("%d",&new_val);
    if(position >= 0 && position < size){
        arr[position] = new_val;
        printf("Array after update: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid position\n");
    }
}
//Searching 
#include <stdio.h>
int main(){
    int i,position,val,flag=0;
    int arr[]={2,3,45,6,8,9,5,6,2,7,6};
    int size=sizeof(arr)/4;
    printf("Enter the element to search \n");
    scanf("%d",&val);
    for(i=0;i<size;i++){
        if(arr[i]==val){
            position=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position %d\n",position+1);
    } else {
        printf("Element not found\n");
    }
}