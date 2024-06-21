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