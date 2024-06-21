//Find the maximum value out of all the elements in the given array .........
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8,12,33,22,11,7};
    int n=sizeof(arr)/4;
    int mx=arr[0];                                      // Asumming that at this index element is greatest . Now compare with all elements 
    for(int i=1;i<n;i++){                           // we will start from i=1 since 0 index ki baat ho chuki hai 
        // if (arr[i]>mx) mx=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<"The greatest element in array is :-  "<<mx;
}