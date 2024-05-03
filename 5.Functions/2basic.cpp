#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<a+b;
}
int main(){
    int a,b;
    cout<<"ENter the first number ";
    cin>>a;
    cout<<"Enter the second num";
    cin>>b;
    sum(a,b);
}
// ***********************************************************************************************************************************

// See the differnece between int and void func .. in int function you need to use return and need to print the call by using cout (below exmple shows the difference)
// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     cout<<"ENter the first number ";
//     cin>>a;
//     cout<<"Enter the second num";
//     cin>>b;
//     cout<<sum(a,b);
// }
