// Swap two Variable

// #include <iostream>
// using namespace std;
// int main(){
//     int x=2;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<x<<" "<<y<<endl;  
// }

// Swap two numbers without using extra variable

// #include <iostream>
// using namespace std;
// int main(){
//     int x=6677;
//     int y=7888;
//     cout<<x<<" "<<y<<endl;
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     cout<<x<<" "<<y<<endl;  
// }

// Swapping using functions

// #include <iostream>
// using namespace std;
// void swap(int x, int y){
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     cout<<x<<" "<<y;
// }
// int main (){
//     int a,b;
//     cout<<"Enter a:"<<endl;
//     cin>>a;
//     cout<<"Enter b:"<<endl;
//     cin>>b;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
// }

// THIS IS PASS BY VALUE AND WILL NOT WORK . DO WITH PAASS BY REFERENCE FOR THAT JUST USE & SIGN
// #include <iostream>
// using namespace std;
// void swap(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<x<<" "<<y;
// }
// int main (){
//     int x,y;
//     cout<<"Enter x:"<<endl;
//     cin>>x;
//     cout<<"Enter y:"<<endl;
//     cin>>y;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);
// }                             // WRONG ****************************

#include <iostream>
using namespace std;
void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}
int main (){
    int x,y;
    cout<<"Enter x:"<<endl;
    cin>>x;
    cout<<"Enter y:"<<endl;
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
}  