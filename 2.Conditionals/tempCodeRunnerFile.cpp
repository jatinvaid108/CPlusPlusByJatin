#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter num a :-  ";
    cin>>a;
    cout<<"Enter num b :-  ";
    cin>>b;
    cout<<"Enter num c :-  ";
    cin>>c;
    cout<<"Enter num d :-  ";
    cin>>d;
    int largest =a;
    if(b>largest) largest=b;
    if(c>largest) largest=c;
    if(d>largest) largest=d;
    cout<<"THe largest of the four numbers is :-"<<largest<<endl;
}