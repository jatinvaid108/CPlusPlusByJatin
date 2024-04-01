// Calculate the sum of all the elements in the given array 

#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[5];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}

// size of -------->
#include <iostream>
using namespace std;
int main(){
    int x;
    char y;
    bool z;
    float a;
    cout<<sizeof(x)<<endl;  // will show in bytes
    cout<<sizeof(y)<<endl;
    cout<<sizeof(z)<<endl;
    cout<<sizeof(a)<<endl;
}

// Size of array 
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/4;    // Har element ka size 4 byte hota . so Here 8X4=32 --> 32/4=8 elements in array ;
    int sum=0;               // Upper maine n variable bana liya . Usme total size store karr liya 
    for(int i=0;i<n;i++){    
        sum+=arr[i];
    }
    cout<<sum;
}

// Calculate the product of all the elements in the given array 
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/4;
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<product;
}


