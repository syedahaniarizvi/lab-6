#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int i = 1;
    while (i <= rows) {
        int j = 1; 
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
