#include <iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int even;
    int arr[num];
    for(i=0;i<num;i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2 ;
    }
    for(i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}  