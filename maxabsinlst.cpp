#include <iostream>
#include <cmath>

using namespace std;

int maxinlst(int lst[], int size);

int main() {
	int lst[] = {-19, -3, 20, -1, 5, -25};
	cout << "Max number in the list is: " << maxinlst(lst, 6);
	return 0;
}

int maxinlst(int lst[], int size) {
	int tempt = abs(lst[0]);
	for (int i = 0; i < size; i++) {
		if (tempt <= abs(lst[i]))
			tempt = abs(lst[i]);		
	}
	return tempt;
}
