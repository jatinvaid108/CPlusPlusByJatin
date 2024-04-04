// Write a program to check weather the triangle is valid or not 
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a " <<endl;
    cin>>a;
    cout<<"Enter b " <<endl;
    cin>>b;
    cout<<"Enter c " <<endl;
    cin>>c;
    if (a+b>c and b+c>a and c+a>b){
        cout<<"valid Triangle ";
    }
    else{
        cout<<"Invalid Triangle ";
    }
}

//Write a program to check Largest of 4 numbers
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter a " <<endl;
    cin>>a;
    cout<<"Enter b " <<endl;
    cin>>b;
    cout<<"Enter c " <<endl;
    cin>>c;
    cout<<"Enter d " <<endl;
    cin>>d;
    int largest=a;
    if (b>largest){
        largest=b;
    }
    if (c>largest){
        largest=c;
    }
    if(d>largest){
        largest=d;
    }
    cout<<"The largest Number is " <<largest<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z')) {
        cout << "Lowercase" << endl;
    } else if ((ch >= 'A' && ch <= 'Z')) {
        cout << "Uppercase" << endl;
    } else if ((ch >= '0' && ch <= '9')) {
        cout << "Numeric" << endl;
    } else {
        cout << "Character does not belong to any specified range." << endl;
    }

    return 0;
}





