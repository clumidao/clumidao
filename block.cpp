
#include <iostream>
using namespace std;
    
int main(){
int row, col;
do{
    cout << "Enter number of rows and columns:"<<endl;
    cin >> row;
    cin >> col;
        for(int i=0; i<row; i=i+1){
        for(int j=0; j<col; j=j+1){
    cout << "X.";
   }
    cout << endl;
}
}
       while(col!=0 && row!=0);
return 0;
}
