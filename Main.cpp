#include <iostream>
#include <vector>

int main() {
    int chosenNumber = 7; // The pre-selected number
    int userGuess = 0;
    std::vector<int> attempts; // Array/list to keep all entered numbers

    // While loop runs as long as the guess is incorrect
    while (userGuess != chosenNumber) {
        std::cout << "Enter a number: ";
        std::cin >> userGuess;

        // Immediately save the value to the list
        attempts.push_back(userGuess);

        // Compare using if/else statements
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl;
        } else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl;
        } else {
            std::cout << "Correct" << std::endl;
        }
    }

    // After the loop, display all guesses using a for loop
    std::cout << "\nYour guesses were:" << std::endl;
    for (int i = 0; i < attempts.size(); i++) {
        std::cout << attempts[i] << std::endl;
    }

    return 0;
}
