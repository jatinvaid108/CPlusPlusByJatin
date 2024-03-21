// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//     int count=0;
//     if(n==0){
//         count=1;
//     }
//     while(n>0){
//         n=n/10;
//         count=count+1;
//     }
//     cout<<count<<endl;
      
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//     int i=1;
//     int sum=0;
//     while(i<=n){
//         if(i%2==0){
//             sum=sum+i;
//         }
//         i=i+1;
//     }
//     cout<<sum<<endl;
      
// }

#include <iostream>
using namespace std;
int main(){
    int num,last_digit,sum=0;
    cout<<"Enter the  num:"<<endl;
    cin>>num;
    bool is_valid=true;
    while(num>0){
        last_digit=num%10;
        if(last_digit%2==0){
            sum=sum+last_digit;
        }
        else {
            is_valid=false;
            break;
        }
        num=num/10;
    }
    if (is_valid) {
        cout << "Sum of even digits: " << sum << endl;
    } else {
        cout << "Invalid" << endl;
    }
}
