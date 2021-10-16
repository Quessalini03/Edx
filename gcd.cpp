/* The greatest common divisor of integers x and y is the largest integer that
evenly divides both x and y. Write a recursive function named gcd that returns 
the greatest common divisor of x and y. The gcd of x and y is defined recursively
as follows: If y is equal to 0, then gcd(x,y) is x; otherwise gcd(x,y)
is gcd(y,x%y) where % is remainder operator. */

#include <iostream>

using namespace std;

int gcd(int a, int b);

int main() {
	int x, y;
	cin >> x >> y;
	cout << gcd(x, y);
	return 0;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else return gcd(b, a%b);
}


