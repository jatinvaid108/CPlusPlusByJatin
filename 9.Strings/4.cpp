#include <iostream>
using namespace std;
int main(){
    string a="Jatin";
    cout<<a<<endl;
    a=a+" Vaid";    
    cout<<a<<endl;
}

//Reverse of a string :--
#include <iostream> 
using namespace std;   //This is array wala method old one 
int main(){
    string a="Jatin";
    cout<<a<<endl;
    int n=a.length();
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<a<<endl;
}
//Smart method ,,,,Better MEthod 

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

