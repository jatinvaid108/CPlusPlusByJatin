// #include <iostream>
// using namespace std;
// int main(){
//     char arr[5]={'j','a','t','i','n'};
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
// }

//Strings are type of char arrays :----------
//To solve this lets use strings ;  

// #include <iostream>
// using namespace std;
// int main(){
//     string x="Jatin is a coder!";      // Direct Initialising 
//     cout<<x;
// }

// Input :--

#include <iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter your string :-"<<endl;
    // cin>>x;   // This will not consider spacing .Therefore use getline function .
    getline(cin,x); 
    cout<<x;
}