#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Array of names from the assignment
    string names[] = {"Zuck", "Shayd", "Emely", "Amjed", "leen", "Manar", "Anne"};
    int n = sizeof(names) / sizeof(names[0]);

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                // Swap the names
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Sorted names in ascending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << (i < n - 1 ? ", " : "");
    }
    cout << endl;

    return 0;
}
