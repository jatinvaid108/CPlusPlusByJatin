//Indexing of characters in strings . 

#include <iostream>
using namespace std;
int main(){
    string p="Jatin";
    cout<<p[0]<<endl;
    cout<<p<<endl;
    p[0] = 'p';     // Don't use these "" commas , Use ''   
    cout<<p<<endl;
}

// Length of string :--
#include <iostream>
using namespace std;
int main(){
    string x="Hello how are you! i am fine ";
    cout<<x.length()<<endl;
    cout<<x.size();   //same as length
}


//Input the sring and count all the vowels in the string :----
#include <iostream>
using namespace std;
int main(){
    // string x="Hello how are you! i am fine ";
    string x="HELLO HOW ARE YOU! I AM FINE ";
    int n=x.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ){
            count++;
        }
        else if(x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' ){
            count++;
        }
    }
    cout<<"No. of vowels in your string is :- "<<count;
}

//Input a string all update all its even  position to characyer 'a' considering 0 base indexing 

#include <iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter your string "<<endl;
    getline(cin,x);
    int n=x.length();
    for(int i=0;i<n;i++){
        if(i%2==0){
            x[i]='a';
        }
    }
    cout<<x;
}