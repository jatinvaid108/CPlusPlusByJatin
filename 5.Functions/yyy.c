#include <stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int c,d;
    printf("Enter the c: \n");
    scanf("%d",&c);
    printf("Enter the c: \n");
    scanf("%d",&d);
    printf("Before swapping:- c=%d d=%d \n", c,d);
    swap(&c,&d);
    printf("Before swapping:- c=%d d=%d \n", c,d);
}
