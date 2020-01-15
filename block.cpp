
#include <iostream>

using namespace std;

int main(){
int row, col;
string prompt = "Enter number of rows and columns:\n";
int response;
do{
    cout<<prompt;
    cin >> row;
    cin >> col;
    if (row==0 || col== 0) {break;}
for(int i=0; i < row+0; i=i+1)
    {
        for(int j=0; j < col+0; j=j+1)
        cout << "X.";
        cout << endl;
}
}
    while(!response >0);
    }
