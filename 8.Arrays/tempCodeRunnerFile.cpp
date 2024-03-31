#include <iostream>
using namespace std;
void change(int arr[]){
    arr[0]=9;
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