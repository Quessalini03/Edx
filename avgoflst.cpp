#include <iostream>

using namespace std;

int avgoflst(int lst[], int size);

int main() {
	int lst[] = {19, 2, 20, 1, 0, 18};
	cout << "The average of the list is: " << avgoflst(lst, 6);
	return 0;
}

int avgoflst(int lst[], int size) {
	int sum;
	for (int i = 0; i < size; i++) {
		sum += lst[i];	
	}
	return (double)sum/(double)size;
}
