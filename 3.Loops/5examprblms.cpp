// Wap to count the digit of a given number 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int count=0;
    if(n==0){                       
        count=1;
    }
    while(n>0){
        n=n/10;
        count=count+1;
    }
    cout<<count<<endl;}
      
// WaP to print the sum of digit in number 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        sum=sum+last_digit;
    }
    cout<<sum<<endl;
      
}
 // WAP TO print the sum of the all the even digits in the number 
 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    bool isValid = true;  // Flag to check if the number is valid

    while (n > 0) {
        int last_digit = n % 10;

        if (last_digit % 2 == 0) {
            sum = sum + last_digit;
        } else {
            isValid = false;
            break;  // Break the loop if an odd digit is encountered
        }

        n = n / 10;
    }

    if (isValid) {
        cout << "Sum of even digits: " << sum << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}






