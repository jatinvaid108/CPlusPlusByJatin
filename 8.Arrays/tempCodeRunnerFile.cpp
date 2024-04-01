#include <iostream>
using namespace std;
int main(){
    int arr[]={-10,-5,-6,-2,-4,-6};
    int n=sizeof(arr)/4;
    int mx=INT16_MIN;                                      
    for(int i=0;i<n;i++){                          //Here u can start with 0                  
        // if (arr[i]>mx) mx=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<"The greatest element in array is :-  "<<mx;
}