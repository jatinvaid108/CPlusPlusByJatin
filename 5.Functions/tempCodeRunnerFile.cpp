#include <iostream>
using  namespace std;
void usa(){
    cout<<"Good Morning "<<endl;
    return;   // return will close the function
    cout<<"USA"<<endl;
}
void bharat(){
    cout<<"Namaskar Bharat "<<endl;
    cout<<"Jai Hind"<<endl;
    return;
}
int main(){                   // main function can be called single time while others can be called number of times 
    cout<<"Hey Everyone KYa Hall chall "<<endl;
    usa();
    bharat();
}