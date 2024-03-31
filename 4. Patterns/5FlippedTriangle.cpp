// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the num :"<<endl;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         for(int j=1;j<=num+1-i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the num :"<<endl;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         for(int j=1;j<=num+1-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

/* Enter the num :
5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1       */


#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num :"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num+1-i;j++){
            cout<<char (j+64)<<" ";
        }
        cout<<endl;
    }
}

/* Enter the num :
4
A B C D
A B C
A B
A           */