#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the NUmber :-";
    cin>>n;
    if(n%2==0) cout<<"Even";
    else cout<<"Odd"<<"  wow";
}

// Syntax 2  below !! 
// summary:- if(Condition) print statement

#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the NUmber:-";
    cin>>n;
    if(n%2==0){
        cout<<"Even Number !!";
    }
    else {
        cout<<"Odd Number !!";
        cout<<" Woow !!";
    }
}

//  Print the Absolute Number of an Integer . MEans even if there is a negative number print it as positive 


#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Number ";
    cin>>x;
    if(x>=0) cout<<x;
    else cout<<(-x);
}

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number";
    cin>>n;
    if(n<0) 
    cout<<n;
    else {
        cout<<n;}
}