#include <iostream>
using namespace std;
int main(){
    int x=5;
    int y=2;
    cout<<x+y<<endl;    // 7
    cout<<x-y<<endl;    // 3
    cout<<x*y<<endl;    // 10
    cout<<x/y<<endl;    // 2   not 2.5      Computer will give answer in integer only since variable were integers (See in case of float)
}

#include <iostream>
using namespace std;
int main(){
    float x=5;
    float y=2;
    cout<<x+y<<endl;  
    cout<<x-y<<endl;    
    cout<<x*y<<endl;    
    cout<<x/y<<endl;    // Here Computer will give you output as float !! 
}

// INCREMENT AND DECREMENT

#include <iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl;
    cout<<x++<<endl;  //post Increment Pehle X print kro then Add 1
    cout<<x<<endl;
}

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << x << endl;      // Output: 5
    cout << ++x << endl;    // pre-increment: Increment x by 1 before printing
    cout << x << endl;      // Output: 6
    return 0;
}
