//Number square 
// #include <iostream>
// using namespace std;
// int main(){
//     int side ;
//     cout<<"Enter the side of the square : "<<endl;
//     cin>>side;
//     for(int i=1;i<=side;i++){
//         for(int j=1;j<=side;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

/*Output:-
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5     */

/*Step-by-Step Execution:
Let's say the user enters side = 5.
The outer loop (i) runs from 1 to 5:
For i = 1, the inner loop (j) prints 1 2 3 4 5 followed by a space.
For i = 2, the inner loop again prints 1 2 3 4 5 followed by a space.
This process continues until i = 5, printing the same pattern for each row.
After printing each row, a new line (endl) is added, creating the square pattern. */


// #include <iostream>
// using namespace std;
// int main(){
//     int side;
//     cout<<"Enter the number :-"<<endl;
//     cin>>side;
//     for(int i=1;i<=side;i++){
//         for(int j=1;j<=side;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

 /*Output :
 1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5          */

/*Step-by-Step Execution:
Let's say the user enters side = 5.
The outer loop (i) runs from 1 to 5:
For i = 1, the inner loop (j) prints 1 1 1 1 1 followed by a space.
For i = 2, the inner loop again prints 2 2 2 2 2 followed by a space.
This process continues until i = 5, printing the same pattern for each row.
After printing each row, a new line (endl) is added, creating the square pattern.*/


//Alphabet Square..................

// #include <iostream>
// using namespace std;
// int main(){
//     int side;
//     cout<<"Enter the number :-"<<endl;
//     cin>>side;
//     for(int i=1;i<=side;i++){
//         for(int j=1;j<=side;j++){
//             cout<<j+64<<" ";                // This is ascii value Now do typecasting ...............
//         }
//         cout<<endl;
//     }
// }
/*Output
65 66 67 68 69
65 66 67 68 69
65 66 67 68 69
65 66 67 68 69            */


// #include <iostream>
// using namespace std;
// int main(){
//     int side;
//     cout<<"Enter the number :-"<<endl;
//     cin>>side;
//     for(int i=1;i<=side;i++){
//         for(int j=1;j<=side;j++){
//             cout<< char(j+64)<<" ";    
//         }
//         cout<<endl;
//     }
// }
/*
Enter the number :-
5
A B C D E
A B C D E
A B C D E 
A B C D E
A B C D E   */

//Homework 1

// #include <iostream>
// using namespace std;
// int main(){
//     int side;
//     cout<<"Enter the number :-"<<endl;
//     cin>>side;
//     for(int i=1;i<=side;i++){
//         for(int j=1;j<=side;j++){
//             cout<< char(j+96)<<" ";
//         }
//         cout<<endl;
//     }
// }
/*
Enter the number :-
5
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e       */

//Homework 2
#include <iostream>
using namespace std;
int main(){
    int side;
    cout<<"Enter the number :-"<<endl;
    cin>>side;
    for(int i=1;i<=side;i++){
        for(int j=1;j<=side;j++){
            cout<< char(i+64)<<" ";
        }
        cout<<endl;
    }
}

/*
Enter the number :-
5
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E */