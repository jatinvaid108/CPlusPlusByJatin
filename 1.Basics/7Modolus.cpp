// Some Important Points REgarding Modulus Operator
#include <iostream>
using namespace std;
int main()
{   int num1,num2;
    cout << "First Number ";
    cin >> num1;
    cout << "Second Number";
    cin >> num2;
    cout<<num1%num2;
}
// a%10=l (last num) eg:- 121 % 10 = 1
// a % b = a      if a<b 
// a % A = 0
// a % (-b)== a % b ( same treat hota)
// (-a) % b =-(a % b)