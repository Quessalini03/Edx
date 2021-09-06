#include <iostream>

using namespace std;

int* Input(int &c);

int main()
{
	int n = 0;
	int odd = 0, even = 0;
	int* b = Input(n);
	for (int j = 0; j<n; j++) {
		if (b[j] % 2 == 0) {
			even += 1;
		}
		else 
			odd += 1;
	}
	if (even > odd)
		cout << "more evens" << endl;
	else if (odd > even)
			cout << "more odds" << endl;
		else cout << "same number of evens and odds" << endl; 
	
	
}

int * Input(int &c) {
	cout << "How many numbers there are: ";
	cin >> c;
	int a[c];
	cout << "Please enter " << c << " positive integers, separated by a space: " << endl;
	for (int i = 0; i<c; i++) {
		cin >> a[i]; 
	}
	return a;
}
	
