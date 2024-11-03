#include <iostream>
using namespace std;

int main() {
    int rows = 5;  
    int seats = 10;  

    for (int row = 1; row <= rows; row++) {
        cout << "Row " << row << ":" << endl;

        for (int seat = 1; seat <= seats; seat++) {
            cout << "  Seat " << seat << endl;
        }

        cout << endl;
    }

    return 0;
}
