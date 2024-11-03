#include <iostream>
using namespace std;

int main() {
    int numberOfWeeks = 3;
    int week = 1;

    while (week <= numberOfWeeks) {
        cout << "Week " << week << ":" << endl;
        
        int day = 1;
        while (day <= 7) {
            cout << "  Day " << day << endl;
            day++;
        }

        cout << endl;
        week++;
    }

    return 0;
}
