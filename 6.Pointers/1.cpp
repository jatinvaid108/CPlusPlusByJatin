#include <iostream>
using namespace std;
int main(){
    int x=3;
    int y=3;
    cout<<&x<<endl;    // Will show the address 
    cout<<&y<<endl;    // Will show the address 
}

#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int *p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;    // Will show same address 
    cout<<*p<<endl;   //Will show p address par jo value hai 
}
// With pointers we can access the value of a variable whose address is in the pointer ---> Using dereference or * operator 
