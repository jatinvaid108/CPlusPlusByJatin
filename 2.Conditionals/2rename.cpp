// To check weather the person is eligible to vote or not !! 

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age";
    cin>>age;
    if (age>=18)
    cout<<"eligibble to vote";
    else cout<<"Not Eligible";
    return 0;
}

// To check wheather the number is positive or not 

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENter the number ";
    cin>>num;
    if(num>=0){
        cout<<"POsitive Wow!!";
    }
    else{
        cout<<"Negative";
    }
}

// To check Wheather  the number is even or odd !

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num%2==0){
        cout<<"Congo Even Number !!";
    }
    else{
        cout<<"Bad!! Negative Number";
    }
}

// #include <stdio.h>

// int main() {
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the year";
//     cin>>x;
//     if(x%4==0){
//         cout<<"Yeah! it's a leap year";
//     }
//     else{
//         cout<<"Not a Leap year";
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the Cost price ";
    cin>>cp;
    int sp;
    cout<<"Enter the Selling Price";
    cin>>sp;
    if(sp>cp){
        cout<<(sp-cp)<<endl;
        cout<<"Profit Booked";
    }
    else if(sp<cp){
        cout<<(cp-sp)<<endl;
        cout<<"Incurred loss";
    }
    else if (sp==cp)
    {
        cout<<"No loss or Profit ";
    }
    
}

// take length and breadth as input from user . Write a program to check weather the area of rectange is greater than perimeter or not . use simple conditionals for this program



#include <iostream>
using namespace std;
int main(){
    int length;
    int breadth;
    double area, perimeter;
    cout<<"Enter the length";
    cin>>length;
    cout<<"Enter the Breadth";
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);

    if(area>perimeter){
        cout<<"yes";
        cout<<" AREA :- "<<area<<endl;
    }
    else{
        cout<<"NO";
        cout<<"PERIMETER:-  "<<perimeter<<endl;
    }
}