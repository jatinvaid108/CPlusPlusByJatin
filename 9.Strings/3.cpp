#include <iostream>
using namespace std;
int main(){
    string a="Jatin";
    cout<<a<<endl;
    // a.push_back('a');   // can push at the back
    // a.pop_back();  // Will remove last character ...
    a.append(" Vaid");
    cout<<a<<endl;
    cout<<a.length()<<endl;

}    // Better Method of Append i.e + operator is discssed in 4.cpp


#include <iostream>
using namespace std;
int main(){
    string a="Jatin";
    cout<<a.length()<<endl;
    a.clear();    //Will remove the whole string 
    cout<<a.length()<<endl;
    
    cout<<a<<endl;

}