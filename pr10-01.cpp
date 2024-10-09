// This program uses the & operator to determine a  
// variable's address.
#include <iostream> 
using namespace std; 

char letter; // char variable, size 1 byte usually, where the address is stored
short number; // short variable, size 2 bytes usually
float amount; // float variable, size 4 bytes usually
double profit; // double variable, size 8 bytes usually
char ch = {}; // curly braces initialize the variable to 0
 
int main()
{  
  // Print address of each variable
  // The cast to long makes addresses print in decimal
  // rather than in hexadecimal
  cout << "Address of letter is:  "
       <<  long(&letter) << endl;
  cout << "Address of number is:  " 
       << long(&number) << endl;
  cout << "Address of amount is:  " 
       << long(&amount) << endl;
  cout << "Address of profit is:  "
       << &profit << endl;
  cout << "Address of ch is:      " 
       << long(&ch) << endl;	 
     cout << "Value of ch is:      "
           << ch << endl;
cout << "Value of letter is:      "
           << letter << endl;
           cout << "Address of letter is:  "
           << &letter << endl;
  return 0;
}