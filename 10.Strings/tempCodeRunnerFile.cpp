
#include <iostream>
#include <string>
#include <algorithm>  //Necessary header for reverse 
using namespace std;
int main(){
    string a="Jatin is a coder";
    cout<<a<<endl;
    reverse(a.begin(),a.end());
    cout<<a<<endl; 
}