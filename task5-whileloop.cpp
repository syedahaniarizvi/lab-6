#include <iostream>
using namespace std;

int main() {
    int rows = 5;     // Number of rows
    int seats = 10;   // Number of seats per row
    int row = 1;      // Initialize row counter

    while (row <= rows) {
        cout << "Row " << row << ":" << endl;

        int seat = 1; // Initialize seat counter for each row
        while (seat <= seats) {
            cout << "  Seat " << seat << endl;
            seat++;
        }

        cout << endl; // Add a blank line after each row for readability
        row++;
    }

    return 0;
}
