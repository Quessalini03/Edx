#include <iostream>
using namespace std;

int main() {
	int endNum;
	cout << "Please enter a positive integer greater than 1: ";
	cin >> endNum;
	int currNum = 1;
	int prevNum = 1;
	int storeNum = 0;
	cout << currNum << endl;
	while (currNum <= endNum) {
		storeNum = currNum;
		cout << currNum << endl;
		currNum += prevNum;
		prevNum = storeNum;
	} 
	return 0;
}
