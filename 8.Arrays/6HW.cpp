// Count the number of elements in the given array greater than the given number x 

#include <iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter the number x: "<<endl;
    cin>>x;
    int count=0;
    int arr[]={2,3,4,5,6,7};
    for(int i=0;i<6;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}

//Find the second lrgest element in the given array 

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

