#include <iostream>
#include <cmath>

using namespace std;

int getOrder (int num);
bool is_palindrome (int test);

int getOrder (int num) {
	return (int) log10(num);
}

bool is_palindrome (int test) {
	if ((test/10) == 0){
		return true;
	} 
	else {
		int lastNum = (test % 10);
		int firstNum = (test)/(int)pow(10, getOrder(test));
		if (firstNum == lastNum) {
			int newNum = (test/10) % ((int) (pow(10, getOrder(test)-1)));
			return is_palindrome(newNum);
		}
		else return false;
	}
}

int main () {
	int a;
	cin >> a;
	cout << is_palindrome(a);
	return 0;
}



