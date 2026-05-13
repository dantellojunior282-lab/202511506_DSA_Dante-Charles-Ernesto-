#include <iostream>
#include <vector>
using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess;
    vector<int> guesses;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess the chosen number!" << endl << endl;

    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        guesses.push_back(userGuess);

        if (userGuess > chosenNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < chosenNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Correct! You guessed it!" << endl;
        }
    }

    cout << "\n--- Your guesses ---" << endl;
    for (int i = 0; i < guesses.size(); i++) {
        cout << "Guess " << i + 1 << ": " << guesses[i] << endl;
    }

    cout << "Total attempts: " << guesses.size() << endl;

    return 0;
}
