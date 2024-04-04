#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter te number ";
    cin>>x;
    // (condition)? if true: if false;
    (x%2==0)? cout<<"Even":cout<<"Odd";
}

// Switch Statement
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;

    char op;  // Declare the operator variable
    cout << "Enter an operator (+, -, *, /): ";  // Prompt the user for an operator
    cin >> op;

    cout << "Enter n2: ";
    cin >> n2;

    if (op == '+') {
        cout << "Result: " << n1 + n2 << endl;
    } else if (op == '-') {
        cout << "Result: " << n1 - n2 << endl;
    } else if (op == '*') {
        cout << "Result: " << n1 * n2 << endl;
    } else if (op == '/') {
        if (n2 != 0) {
            cout << "Result: " << static_cast<double>(n1) / n2 << endl;
        } else {
            cout << "Cannot divide by zero." << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;

    char op;  // Declare the operator variable
    cout << "Enter an operator (+, -, *, /): ";  // Prompt the user for an operator
    cin >> op;

    cout << "Enter n2: ";
    cin >> n2;

    switch (op) {
        case '+':
            cout << n1 + n2;
            break;
        case '-':
            cout << n1 - n2;
            break;
        case '*':
            cout << n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                cout << n1 / n2;
            } else {
                cout << "Cannot divide by zero.";
            }
            break;
        default:
            cout << "Invalid Operator ";
            break;
    }

    return 0;
}


