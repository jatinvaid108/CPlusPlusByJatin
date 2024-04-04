#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int count=0;
    if(n==0){
        count=1;
    }
    while(n>0){
        n=n/10;
        count=count+1;
    }
    cout<<count<<endl;
      
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<sum<<endl;
      
}

// // WAP to print the reverse of the given number .

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int last_digit,r=0;
    while(num!=0){
        last_digit=num%10;
        r=r*10;
        r=r+last_digit;
        num /=10;
    }
    cout<<r;

}

// //WAP to print the sum of given number and its reverse (means n+r )

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int last_digit,r=0;
    int original_num=num;
    while(num!=0){
        last_digit=num%10;
        r=r*10;
        r=r+last_digit;
        num=num/10;
    }
    cout<<r<<endl;
    cout<<"Sum of given number and its reverse "<<endl;
    cout<<r+original_num;
}

// // Factorial with help of for loop

#include <iostream>
using namespace std ;
int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int product=1;
    for(int i=1;i<=num;i++){
        product*=i;
    }
    cout<<product;
}

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int product=1;
    for(int i=1;i<=num;i++){
        product*=i;
        cout<<product<<endl;
    }
}