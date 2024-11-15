// Input a string of even length and reverse the first half of the string 

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s="raghav  ";
    cout<<s<<endl;
    int n=s.length();
    int i=0;       // Yahan se shru krna
    int j=n/2-1;   // Yahan tkk reverse krna
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}


#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s="raghav";
    cout<<s<<endl;
    int n=s.length();
    // reverse(s.begin(),s.begin()+3);   +3,+4 will reverse those many charaters
    reverse(s.begin(),s.begin()+n/2);
    cout<<s<<endl;
}

// Input a string of length greater  than 5 and reverse the substring from position 2to 5 using the inbuilt functions .Position 2 to 5 does not mean Indexing . Simple counting it is :- 

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string p;
    cout<<"Enter the string you would like to input"<<endl;
    getline(cin,p);
    int n=p.length();
    reverse(p.begin()+1,p.begin()+5);
    cout<<p<<endl;
}