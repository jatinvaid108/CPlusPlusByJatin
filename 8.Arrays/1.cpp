// Array is basically list of integers, char,  float 
#include <iostream>
using namespace std;
int main(){
    // 5 Integers-> 6,2,8,5,0
    int arr[5];    //Decleration

    arr[0]=6;   //initialising of array elements (individual)
    arr[1]=2;   // Indexing will always be from zero
    arr[2]=8;
    arr[3]=5;
    arr[4]=0;
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
}

// Using loops :----->

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];    
//     arr[0]=6;   
//     arr[1]=2;
//     arr[2]=8;
//     arr[3]=5;
//     arr[4]=0;
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Taking input with the help of loops .......
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]*2<<" ";
    }
}


#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]*2<<" ";
    }
    arr[0]=100;    // Updating array 
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<arr[i]*2<<" ";
    }
}


