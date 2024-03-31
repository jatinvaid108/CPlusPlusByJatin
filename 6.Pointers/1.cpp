// #include <iostream>
// using namespace std;
// int main(){
//     int x=3;
//     int y=3;
//     cout<<&x<<endl;    // Will show the address 
//     cout<<&y<<endl;    // Will show the address 
// }

#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int *p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;    // Will show same address 
}
// With pointers we can access the value of a variable whose address is in the pointer ---> Using dereference or * operator 
