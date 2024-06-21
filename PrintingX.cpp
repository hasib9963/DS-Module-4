#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    for (int i = 0; i < n; i++) { // loop over rows
        for (int j = 0; j < n; j++) { // loop over columns
            if (i == j && i + j == n - 1) { // center position
                cout << "X";
            } else if (i == j) { // backslash diagonal
                cout << "\\";
            } else if (i + j == n - 1) { // forward slash diagonal
                cout << "/";
            } else {
                cout << " "; // print space
            }
        }
        cout << "\n"; 
    }
    return 0;
}
