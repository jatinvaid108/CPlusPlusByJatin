#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    arr[0]=8;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}

// Reverse Array :-
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6};   // If You are doing decleration and initialising in same not need to mention size of array !!
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
// Pass by value example again (one was given in end of function in swapping )
#include<iostream>
using namespace std;
void change(int x) {
    x = 8;
}
int main(){
    int x = 3;
    cout<<x<<endl;
    change(x); // pass by value Therefore will print same value as 3 . Upper 8 wala dabba hi alag hai 
    cout<<x<<endl;
} 


#include <iostream>
using namespace std;
void change(int brr[]){
    brr[0]=9;
}
int main(){
    int arr[]={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    //Updating with help of functions
    change(arr);   // Arrays are pass by Reference . Donot confuse between pass by value here not applicable 
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    
}