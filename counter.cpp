#include <iostream>

using namespace std; 
int main()
{
	int QuartersNum, DimesNum, NickelsNum, PenniesNum;
	float MonetaryVal;
	cout << "Please enter the number of coins:" << endl << "# of quarters: ";
	cin >> QuartersNum;
	cout << "# of dimes: ";
	cin >> DimesNum;
	cout << "# of nickels: ";
	cin >> NickelsNum;
	cout << "# of pennies: ";
	cin >> PenniesNum;
	MonetaryVal = 0.25*QuartersNum + 0.1*DimesNum + 0.05*NickelsNum + 0.01*PenniesNum;
	cout << "The total is " << (int) MonetaryVal << " dollars " << 100*(MonetaryVal - (int) MonetaryVal)
							<< " cents" << endl;
	return 0;
	
}
