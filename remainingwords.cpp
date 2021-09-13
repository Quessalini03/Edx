#include <iostream>
#include <string>

using namespace std;

string remainingwords(string s);

int main() {
    cout << remainingwords("the quick brown fox");
    return 0;
}

string remainingwords(string s) {
    return s.substr(s.find(" ")+1);
}