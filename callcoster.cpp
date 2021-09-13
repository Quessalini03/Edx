#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string weekDay[7] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};
    string day;
    int time, duration, hour, min;
    float cost, costRate;
    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> time;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;
    int i;
    for (i = 0; i < 7; i++) {
        if (day == weekDay[i])
            break;
    }
    if (i >= 0 && i <= 4) {
        hour = time/100;
        min = time%100;
        if ((hour >= 8 && hour <= 17) || (hour == 18 && min == 0))
            costRate = 0.4;
        else costRate = 0.25;
    }
    else costRate = 0.15;
    cost =(float) duration*costRate;
    cout << "This call will cost $" << fixed << setprecision(2) << cost << endl;
}