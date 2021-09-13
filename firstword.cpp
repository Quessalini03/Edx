#include <iostream>
#include <string>

using namespace std;

string firstword(string s);

int main() {
    cout << firstword("the quick brown fox");
    return 0;
}

string firstword(string s) {
    return s.substr(0, s.find(" "));
}