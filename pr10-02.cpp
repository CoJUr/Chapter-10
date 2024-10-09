// This program stores the address of a variable in a pointer.  
#include <iostream> 
using namespace std;

int main() 
{
	int x = 25;   // int variable
	int* ptr;     // Pointer variable, can point to an int

	ptr = &x;     // Store the address of x in ptr
	cout << "The value in x is " << x << endl;
	cout << "The address of x is " << ptr << endl;

	// Use the pointer to change the value of x
	*ptr = 100; 
	cout << "The value in x is now " << x << endl;
	return 0;
}