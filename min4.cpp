 #include <iostream>
#include <cstdlib>
using namespace std;

int smallest_of_three(int num1, int num2, int num3, int num4); // returns smaller number                   

int main(int argc, char *argv[])  {
  if (argc != 5) {
    cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
    cerr << " Prints smallest of the four numbers" << endl;
    exit(1);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);

  cout << smallest_of_three(a,b,c,d) << endl;

  return 0;
}

int smallest_of_three(int num1, int num2, int num3, int num4) {
  if (num1<=num2)  { // num1 <= num2, so compare num1 to num3                                                     
    if (num3 <= num1) {
      return num3;
    } else {
      return num1;
    }
  }  // num1 > num2, i.e. num2 < num1.  so compare num3 to num2                                   
    if (num3 <= num2) {
      return num3;
    } else {
      return num2;
    }
     {                                 
    if (num4 <= num2) {
      return num4;
    } else {
      return num2;
    }
}
}
