//Last time you got this in end term and you did it wrong :-
#include <iostream>
using namespace std;
int main(){
    int num,largest=0;
    cout<<"Enter the num"<<endl;
    cin>>num;
    int last_digit;
    while(num>0){
        last_digit=num%10;
        if(last_digit>largest) largest=last_digit;
        num=num/10;
    }
    cout<<"The largest number is "<<largest<<endl;
    switch(largest){
        case 1: if(largest==1) cout<<"One";
        break;
        case 2: if(largest==2) cout<<"Two";
        break;
        case 3: if(largest==3) cout<<"Three";
        break;
        case 4: if(largest==4) cout<<"Four";
        break;
        case 5: if(largest==5) cout<<"Five"; 
        break;
        case 7: if(largest==7) cout<<"Seven"; 
        break;
        case 6: if(largest==6) cout<<"Six";
        break;
        case 8: if(largest==8) cout<<"Eight"; 
        break;
        case 9: if(largest==9) cout<<"Nine"; 
        break;
        case 10: if(largest==10) cout<<"Ten"; 
        break;
        default : cout<<"Input it in switch cases";
}
}

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