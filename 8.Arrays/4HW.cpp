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

//Find the minimum value out of all the elements in the given array .........
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8,12,33,22,11,7};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for(int i=1;i<n;i++){                           
        if (arr[i]<mn) mn=arr[i];
        // mn=min(mn,arr[i]);
    }
    cout<<"The greatest element in array is :-  "<<mn;
}

//Better MEthod ------------>
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8,12,33,22,11,7};
    int n=sizeof(arr)/4;
    int mx=-1;                                      
    for(int i=0;i<n;i++){                          //Here u can start with 0                  
        // if (arr[i]>mx) mx=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<"The greatest element in array is :-  "<<mx;
}


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