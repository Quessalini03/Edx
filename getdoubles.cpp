/* Write a function that takes a parameter that is an integer named numDoubles.
Create a dynamic array that can store numDoubles doubles and make a loop that fills in
each array entry with the value of the element number (starting with 1) divided by 3.
Return the array from the function.

A sample execution with numDoubles equal to 4 would produce the array 
[0.3333, 0.6666, 1, 1.3333]*/

#include <iostream>

using namespace std;

double* getDoubles(int numDoubles);

int main() {
	int numOfDoubles;
	cout << "How many doubles there are: ";
	cin >> numOfDoubles;
	double* arr = getDoubles(numOfDoubles);
	for (int i = 0; i < numOfDoubles; i++)
		cout << arr[i] << endl;
	delete [] arr;
	return 0;
}

double* getDoubles(int numDoubles) {
	double* temp = new double [numDoubles];
	for (int i = 0; i < numDoubles; i++) {
		temp[i] = (double) (i+1)/3.0;
	}
	return temp;		
}
