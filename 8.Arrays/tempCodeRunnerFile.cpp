#include <iostream>
using namespace std;
int main(){
    int arr[]={7,4,5,3,8,9,2,1};
    int len=sizeof(arr)/4;
    int max=arr[0];
    int max2=arr[1];
    for(int i=0;i<len;i++){
        if(arr[i]<max && arr[i]<max2 ){
            max2=arr[i];
        }
    }
    cout<<max2<<endl;
}