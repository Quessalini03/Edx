#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	float weight, height, bmi;
	string status;
	cout << "Please enter weight in kilograms: ";
	cin >> weight;
	cout << "Please enter height in meters: ";
	cin >> height;
	bmi = weight/(height*height);
	if (bmi < 18.5)
		status = "Underweight";
	else
		if (bmi >= 18.5 && bmi < 25)
			status = "Normal";
		else 
			if (bmi >= 25 && bmi < 30)
				status = "Overweight";
			else status = "Obese";
	cout << setprecision(2) << fixed << "BMI is: " << bmi << ", Status is " << status << endl;
	return 0;
}
