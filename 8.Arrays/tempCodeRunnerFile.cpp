
#include <iostream>
#include <climits> 
using namespace std;
int main(){
   int arr[]={-10,-2,-3,-4,-5};
   int n=sizeof(arr)/4;
   int mx=INT_MIN; 
   for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
   }
   int sec_mx=INT_MIN;
   for(int i=0;i<n;i++){
    if(arr[i]!=mx) sec_mx=max(sec_mx,arr[i]);
   }
   cout<<sec_mx;
} 