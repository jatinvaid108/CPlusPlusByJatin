// Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array .

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,square;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int arr[num];
    for(int i=1;i<=num;i++){
        square=pow(i,2);
        cout<<square<<" ";
    }
    
}    

// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include <iostream>
using namespace std;

int main() {
    int num, i;
    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];

    // Input array elements
    cout<<"Enter element "; 
    for (i = 0; i < num; i++) {
        cout<< i + 1 << ": ";
        cin >> arr[i];
    }

    // Modify array elements based on index
    for (i = 0; i < num; i++) {
        if (i % 2 == 0)
            arr[i] += 10; // Increment even-indexed elements by 10
        else
            arr[i] *= 2; // Multiply odd-indexed elements by 2
    }

    // Print modified array
    cout << "Modified Array:" << endl;
    for (i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

