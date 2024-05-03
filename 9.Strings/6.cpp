// int to string 
#include <iostream>
using namespace std;
int main(){
    int x=45673;
    string s=to_string(x);
    s=s+"  Jatin ji ";
    cout<<s<<endl;
}

//Return the total number of digits in a number without using loops 

#include <iostream>
using namespace std;
int main(){
    int x=45673;
    string s=to_string(x);
    int n=s.length();
    cout<<n;
}


//String to Integer 
#include <iostream>
using namespace std;
int main(){
    string s="647484";
    int x=stoi(s);
    cout<<x<<endl;
}