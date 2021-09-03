#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	float weight, height, bmi;
	cout << "Please enter weight in kilograms: ";
	cin >> weight;
	cout << "Please enter height in meters: ";
	cin >> height;
	bmi = weight/(height*height);
	cout << setprecision(2) << fixed << "BMI is: " << bmi;
	return 0;
}
