#include <iostream>

using namespace std;

int main() {
    // Array of numbers from the assignment
    int numbers[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the numbers
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted numbers in ascending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << (i < n - 1 ? ", " : "");
    }
    cout << endl;

    return 0;
}
