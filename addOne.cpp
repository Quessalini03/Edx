/* In the C programming language there is no pass-by-reference syntax to pass
a variable by reference to a function. Instead a variable is passed by pointer 
(just to be confusing, sometimes passing by pointer is referred to as 
pass-by-reference). This Practice Program asks you to do the same thing as C,
which in practice would be simpler to implement using C++’s reference parameter syntax. Here is the header for a function that takes as

input a pointer to an integer:

Function Signature

void addOne(int *ptrNum)

Complete the function so it adds one to the integer referenced by ptrNum.

Write a main function where an integer variable is defined, give it an initial

value, call addOne, and output the variable. It should be incremented by 1

*/

#include <iostream>

using namespace std;

void addOne(int* ptrNum);

int main() {
	int a = 0;
	int* ptr = &a;
	addOne(ptr);
	cout << a << endl;
	return 0;
}

void addOne(int* ptrNum) {
	*ptrNum += 1;
} 
