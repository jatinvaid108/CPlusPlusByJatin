
// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the num :"<<endl;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         for(int j=1;j<=num+1-i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

/*Enter the num :
5
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5           */

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

