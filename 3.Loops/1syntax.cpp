#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your desired number";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<" Jai Shree Ram "<<endl;
        cout<<" Hare Krishna  "<<endl;
    }
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your desired number:-     ";
    cin>>n;
    for(int i=6;i<=n;i++){
        cout<<i<<endl;        
    }
}
// Write a program to print the values of all even numbers upto 100
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your desired number:-     ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0) cout<<i<<endl;
    }
}

// Let's check the better method to solve above which uses less space and time and executes program only 50 times 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num ";
    cin>>n;
    for(int i=2;i<=n;i=i+2){      // will print even numbers with loop executing only 50 times not 100 times
        cout<<i<<" ";
    }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num ";
    cin>>n;
    for(int i=1;i<=n;i=i+2){         // will print odd numbers 
        cout<<i<<" ";
    }
}

