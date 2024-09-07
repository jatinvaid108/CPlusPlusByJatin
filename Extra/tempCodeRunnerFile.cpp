#include <iostream>
using namespace std;
int reverse(int x) {
        int reversed=0;
        while(x>0){
            int last_digit=x%10;
            reversed=reversed*10;
            reversed+=last_digit;
            x=x/10;
        }
        return reversed;
    }
int main(){
    int num;
    cin>>num;
    cout<<reverse(num);
}