#include <iostream>
using namespace std;
int main(){
    float r=4.3;
    // float y=3.14*r*r;
    // cout<<y;
    cout<<3.14*r*r;
}

#include <iostream>
using namespace std;
int main(){
    float p=1000;
    float r=30;
    float t=10;
    float SI=(p*r*t)/100;
    cout<<SI<<endl;
}

#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the Principle Amount\n";
    cin>>p;
    cout<<"Enter the Rate of Interest\n";
    cin>>r;
    cout<<"Enter the time limit \n";
    cin>>t;
    float SI=(p*r*t)/100;
    cout<<SI;
}