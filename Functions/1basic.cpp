// #include <iostream>
// using  namespace std;
// void greet(){
//     cout<<"Good Morning "<<endl;
//     cout<<"how are you"<<endl;
// }
// int main(){
//     greet();
//     cout<<"Hey"<<endl;
//     greet();
// }


// #include <iostream>
// using  namespace std;
// void usa(){
//     cout<<"Good Morning "<<endl;
//     return;   // return will close the function
//     cout<<"USA"<<endl;
// }
// void bharat(){
//     cout<<"Namaskar Bharat "<<endl;
//     cout<<"Jai Hind"<<endl;
//     return;
// }
// int main(){                   // main function can be called single time while others can be called number of times 
//     cout<<"Hey Everyone KYa Hall chall "<<endl;
//     usa();
//     bharat();
// }
// ***********************************************************************************************************************************
#include <iostream>
using  namespace std;
void usa(){
    cout<<"Good Morning !! You are in USA "<<endl;
    return;   // return will close the function
    cout<<"USA"<<endl;
}
void bharat(){
    cout<<"Namaskar Bharat "<<endl;
    cout<<"Jai Hind"<<endl;
    usa();                         // Calling usa function in bharat function only 
    return;
}
int main(){                   // main function can be called single time while others can be called number of times 
    cout<<"You are in main "<<endl;
    bharat();
}