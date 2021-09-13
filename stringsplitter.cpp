#include <iostream>
#include <string>

using namespace std;

int main() {
    string Input, firstHalf, secondHalf;
    char middleChar;
    cout << "Enter an odd length string: ";
    getline(cin, Input);
    middleChar = Input[Input.length()/2];
    for (int i = 0; i < Input.length() - 1; i++) {
        if (i < (Input.length()/2))
            firstHalf += Input[i];
        else 
            secondHalf += Input[i+1];
    }
    cout << "Middle character: " << middleChar << endl;
    cout << "First half: " << firstHalf << endl;
    cout << "Second half: " << secondHalf << endl;
    return 0;
}