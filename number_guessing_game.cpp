#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Variable to store the chosen number [cite: 16, 17]
    int chosenNumber = 7; 
    
    // 2. Variable to store user's input [cite: 18]
    int userGuess = 0; 
    
    // 3. List (vector) to keep all numbers entered by the user [cite: 19]
    vector<int> attempts; 

    cout << "--- Welcome to the Number Guessing Game ---" << endl;

    // 4. While loop that runs until the guess is correct 
    while (userGuess != chosenNumber) {
        cout << "Enter a number: "; // [cite: 22]
        cin >> userGuess; // [cite: 23]

        // Save every attempt immediately into the list [cite: 24]
        attempts.push_back(userGuess); 

        // 5. Compare the guess with the chosen number [cite: 25]
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl; // [cite: 26]
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl; // [cite: 27]
        } 
        else {
            cout << "Correct!" << endl; // [cite: 28]
        }
    }

    // 6. After the loop, display all guesses using a for loop 
    cout << "\nAll your guesses recorded during the game:" << endl;
    for (int i = 0; i < attempts.size(); i++) {
        cout << "Attempt " << i + 1 << ": " << attempts[i] << endl;
    }

    return 0;
}
