//char is a type of data type which can stores all the values of like that is written in our keyboard even number special Characters etc.
#include <iostream> 
using namespace std;
int main(){
    char x;
    cout<<"Enter the char value you would like to store ";
    cin>>x;
    cout<<x; }

// ASCII VALUES
// Each and every Character has ASCII Value associated with it 
// BElow is the example given :-
// To print ascii value of any character (Typecasting)


#include <iostream>
using namespace std ;
int main(){
    char x;
    cin>>x;
    cout<<(int)x;

}

#include <iostream>
using namespace std ;
int main(){
    int x;
    cin>>x;
    char ch=(char)x;
    cout<<ch;
}
// ABove program is telling us about ascii value of integers . Firstly Converting integer to char  
