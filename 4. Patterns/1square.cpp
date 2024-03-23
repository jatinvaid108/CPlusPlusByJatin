// We will be moving systematically . Firstly we are going to study square and rectangle patterns2
// Don't Pay attention to .exe files .......................................... Enjoy Learning !!

// m X n = where m is rows and n is columns2
// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the num of rows:"<<endl;
//     cin>>rows;
//     for(int i=1;i<=rows;i++){
//         cout<<"*****"<<endl;  // Here we have defined columns by ourselves . (Rows is taken as input)
//     }
// }

//Taking rows and columns as INPUT :-

// #include <iostream>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter the num of rows:"<<endl;
//     cin>>rows;
//     cout<<"Enter the num of cols:"<<endl;
//     cin>>cols;
//     for(int i=1;i<=rows;i++){             // for rows
//         for(int j=1;j<=cols;j++){         // for cols
//             cout<<" *";
//         }
//         cout<<endl;                     // Main thing So that row is created !!
//     }
// }

// Summary:- i wala loop toh bss column wale loop ko chala rha * printing toh cols wale ne kara na 

// WAP to print Rectangle pattern :- 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){             // for rows
        for(int j=1;j<=n;j++){         // for cols
            cout<<" *";
        }
        cout<<endl;                     // Main thing So that row is created !!
    }
}

/*
Enter the num of n:
5
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *              */
