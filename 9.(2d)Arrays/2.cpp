//Row Wise sum Print of 2d matrix

#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int matrix1[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=matrix1[i][j];
        }
        cout<<sum<<endl;
    }
}

//Column Wise Sum Print
#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int matrix1[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    
    for(int j=0;j<cols;j++){
        int sum=0;
        for(int i=0;i<rows;i++){
            sum+=matrix1[i][j];
        }
        cout<<sum<<endl;
    }
}

//Diagonal sum print

#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int matrix1[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    int diagonal_sum=0;
    for(int i=0;i<rows;i++){
        diagonal_sum+=matrix1[i][i];
    }
    cout<<diagonal_sum;
}


//Transpose of a 2d matrix
#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int matrix1[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Transpose of a Matrix"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix1[j][i]<<" ";
        }
        cout<<endl;
    }
    
}