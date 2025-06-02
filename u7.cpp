#include<iostream>
using namespace std;

int main() {
    int n = 4; // Height of the diamond (you can change it)

    // Top half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print the first star
        cout << "*";

        // Print spaces inside the diamond for hollow part
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print the second star at the end of the row
            cout << "*";
        }

        cout << endl; // Move to the next line after each row
    }

    // Bottom half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print the first star
        cout << "*";

        // Print spaces inside the diamond for hollow part
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print the second star at the end of the row
            cout << "*";
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}
