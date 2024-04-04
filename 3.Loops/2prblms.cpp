// Display this AP 1,3,5,7,9

// AP:- a+(n-1)*d  where a=first term and d is the common differene therefore 1*(n-1)*2=(2*n-1)
// and we will use i=i+2 since differene is of two terms

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the last number";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        cout << i << endl;
    }
}

// Display this ap 4,7,10,13,16
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "ENter the nth term";
    cin >> n;
    for (int i = 4; i <=4+(n-1)*3; i = i + 3)       // or 3*n+1 also can be written 
    {
        cout << i << endl;
    } 
    return 0;
}

// Dispaly this GP 5,10,45

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "ENter the nth term";
    cin >> n;
    int a=5;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a =a*3;

    }
    return 0;
}
// find the highest commo factor of a number 
#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int f;
    
    for(int i=n/2;i>=1;i--){                             // Here using n/2 we can use n also but n/2 will reduce loop running to half
        if(n%i==0){
            cout<<i<<endl;  
            break;
        }
    }
}
// To check The composite number 
#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    
    for(int i=2;i<=n/2;i++){                             // Here using n/2 we can use n also but n/2 will reduce loop running to half
        if(n%i==0){
            cout<<"Composite Number ";
            break;
        }
        else cout<<"prime"; break;
    }
}
 // To check Prime Number :-
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool flag = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (n==1) cout<<"Neither prime nor Composite ";
    else if (flag == true) {
        cout << "Prime" << endl;
    } else {
        cout << "Composite Number" << endl;
    }

    return 0;
}


