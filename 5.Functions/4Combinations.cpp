// Finding no. of combinations with the help factorial

// #include <iostream>
// using namespace std;
// int main(){
//     int n,r,a=1,b=1,c=1;
//     cout<<"Enter n:"<<endl;
//     cin>>n;
//     cout<<"Enter r"<<endl;
//     cin>>r;
//     for(int i=1;i<=n;i++){
//         a*=i;
//     }
//     for(int j=1;j<=r;j++){
//         b*=j;
//     }
//     for(int i=1;i<=n-r;i++){
//         c*=i;
//     }
//     cout<<"No. of Possible Combinations:  "<<a/(b*c);

// }

// HERE COMES FUNCTIONS WE WILL MAKE UPPER CODE LOOK SMALL BY USING FUNCTIONS .

#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n=1;
    cout<<"Enter n:"<<endl;
    cin>>n;  
    int r=1;
    cout<<"Enter r:"<<endl;
    cin>>r;
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);

    cout<<a/(b*c);
}

#include <iostream>
using namespace std;
int fact(int x){
    int num,product=1;
    for(int i=1;i<=x;i++){
        product*=i;
    }
    return product;
}
int main(){
    int a,b,c;
    cin>>a>>b;
    int a1=fact(a);
    int b2=fact(b);
    int c3=fact(a-b);
    int denominator=b2*c3;
    int factorial=a1/denominator;
    cout<<"The combinations are as follows: "<<factorial;
}
