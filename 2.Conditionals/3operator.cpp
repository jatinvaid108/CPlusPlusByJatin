#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;
    if(num%5==0 and num%3==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;
    if(num%5==0 || num%3==0){     ///You may also use or operator 
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}