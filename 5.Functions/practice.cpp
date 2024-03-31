#include <iostream>
using namespace std;
int main(){
    int n,r,a=1,b=1,c=1;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter r"<<endl;
    cin>>r;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    for(int j=1;j<=r;j++){
        b*=j;
    }
    for(int i=1;i<=n-r;i++){
        c*=i;
    }
    cout<<"No. of Possible Combinations:  "<<a/(b*c);

}