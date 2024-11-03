#include <iostream>
using namespace std;

int main() {
    int numberOfWeeks = 3;

    for (int week = 1; week <= numberOfWeeks; week++) {
        cout << "Week " << week << ":" << endl;
        
        for (int day = 1; day <= 7; day++) {
            cout << "  Day " << day << endl;
        }

        cout << endl;
    }

    return 0;
}
