#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned int firstItem, secondItem;
    char clubCard;
    float taxRate, promoPrice, discntPrice, totalPrice, basePrice;
    cout << "Enter price of the first item: ";
    cin >> firstItem;
    cout << "Enter price of the second item: ";
    cin >> secondItem;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;
    promoPrice = (firstItem < secondItem) ? ((float) firstItem/2.0) + (float) secondItem 
                                            : ((float) secondItem/2.0) + (float) firstItem;

    while (1) {
        cout << "Does customer have a club card? (Y/N): ";
        cin >> clubCard;
        if (clubCard == 'y' || clubCard == 'Y') {
        discntPrice = promoPrice*(0.9);
        break;
        }
        else
            if (clubCard == 'n' || clubCard == 'N') {
                discntPrice = promoPrice;
                break;
            }
            else 
                cout << "Invalid answer, please type again :(" << endl;
    }
    basePrice = firstItem + secondItem;
    cout << "Base price = " << fixed << setprecision(2) << basePrice << endl;
    cout << "Price after discounts = " << fixed << setprecision(2) << discntPrice << endl;
    totalPrice = discntPrice*(1.0+taxRate/100.0);
    cout << "Total price = " << fixed << setprecision(2) << totalPrice << endl;
    return 0;
}