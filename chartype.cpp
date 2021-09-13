#include <iostream>

using namespace std;

int main() {
    char Input;
    cout << "Enter a character: ";
    cin >> Input;
    if (Input >= '0' && Input <= '9')
        cout << Input << " is a digit." << endl;
    else 
        if (Input >= 'a' && Input <= 'z')
            cout << Input << " is a lower case letter." << endl;
        else
            if (Input >= 'A' && Input <= 'Z')
                cout << Input << " is a upper case letter." << endl;
            else 
                cout << Input << " is a non-alphanumeric  character." << endl;
    return 0;          

}