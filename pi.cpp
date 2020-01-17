#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
 
cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1
cout.setf(ios::showpoint); // Always display the decimal point.
cout.precision(3);         // Set the number of digits to display after the decimal point to 3

  int n, value;
  cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
  cin >> value; 
    while(1){
        if (value == -1){
          return 0;
        }
if (value > 0){
     double partial = 0;
     for (n = 0; n <= value; n=n+1)
         partial += pow(-1,n)/(2*n + 1);
     double newPi = 4 * partial;
            cout << "The approximate value of pi using " << value+1 << " terms " << newPi <<"\n";
          }
        cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        cin >> value; 
    } 
  return 0;
}
