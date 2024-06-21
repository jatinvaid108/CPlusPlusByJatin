#include <iostream>
using namespace std;
int dataTypeSize(string str) {
        if(str=="Integer") return 4;
        else if(str=="Character") return 1;
        else if (str=="Float") return 4;
        else if(str=="Double") return 8;
        else if(str=="Long") return 4;
        else return -1;
    }
int main(){
    string str;
    cin>>str;
    int m=dataTypeSize(str);
    cout<<m<<endl;
}