// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the rows:"<<endl;
//     cin>>rows;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
/* Enter the rows:
5
*
* *
* * *
* * * *
* * * * *           */

// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the rows:"<<endl;
//     cin>>rows;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

/*Enter the rows:
4
1
1 2
1 2 3
1 2 3 4         */


// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the rows:"<<endl;
//     cin>>rows;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// Enter the rows:
// 3
// 1
// 2 2
// 3 3 3


// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the rows:"<<endl;
//     cin>>rows;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char (j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }
/*Enter the rows:
4
A
A B
A B C
A B C D     */

// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the rows:"<<endl;
//     cin>>rows;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char (i+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

/*Enter the rows:
5
A
B B
C C C
D D D D
E E E E E       */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= i; j++) {
                cout << char(j + 64) << " ";
            }
        } else {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*Enter the number: 4
1
A B
1 2 3
A B C D     */



