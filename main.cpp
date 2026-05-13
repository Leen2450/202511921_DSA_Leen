#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Variable to store the chosen number
    int chosenNumber = 7;

    // Variable to store user input
    int userGuess = 0;

    // Vector to store all guesses
    vector<int> guesses;

    // While loop continues until the correct number is guessed
    while (userGuess != chosenNumber)
    {
        // Ask the user to enter a number
        cout << "Enter a number: ";
        cin >> userGuess;

        // Store the guess in the vector
        guesses.push_back(userGuess);

        // Compare the guess with the chosen number
        if (userGuess > chosenNumber)
        {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Correct" << endl;
        }
    }

    // Display all guesses using a for loop
    cout << "\nAll guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++)
    {
        cout << guesses[i] << endl;
    }

    return 0;
}
