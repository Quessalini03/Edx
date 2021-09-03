#include <iostream>
using namespace std;

int main() {
	int endNum;
	cout << "Please enter a positive integer greater than 1: ";
	cin >> endNum;
	int currNum = 1;
	int prevNum = 1;
	int storeNum = 0;
	int counter = 1;
	cout << counter << ": " << prevNum << endl;
	while (currNum <= endNum) {
		storeNum = currNum;
		counter += 1; 
		cout << counter << ": " << currNum << endl;
		currNum += prevNum;
		prevNum = storeNum;
	} 
	return 0;
}
