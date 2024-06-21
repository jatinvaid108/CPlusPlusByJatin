#include <iostream>
using namespace std;
int main(){
    int num,last_digit;
    int reversed=0;
    cin>>num;
    while(num>0){
        last_digit=num%10;
        reversed=reversed*10;
        reversed+=last_digit;
        num=num/10;
    }
    cout<<"Reversed Number is: "<<reversed;
}