#include <iostream>
#include <cmath>

using namespace std;

int getOrder(int num);

bool is_palindrome(int test);

int main() {
	int num;
	cin>>num;
	cout<<is_palindrome(num);
	return 0;
}

int getOrder(int num){
	return (int)log10((float)num);
}

bool is_palindrome(int test){
	bool result;
	if (test==0){
		result = true;
	}
	else{
		int order = getOrder(test);
		int min_num = test%10;
		int max_num = test/(int)pow(10,order);
		
		if (min_num==max_num){
			int new_num = (test - max_num*pow(10,order))/10;
			result = is_palindrome(new_num);
		}
		else
			result = false;
	}
	return result;
}
