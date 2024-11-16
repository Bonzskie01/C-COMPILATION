#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

void playGame() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int numberOfGuesses = 0;

    cout << "Guess the Number Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess the number!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        numberOfGuesses++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << numberOfGuesses << " tries." << endl;
        }
    } while (guess != secretNumber);
}

int main() {
    char playAgain;
    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for Playing" << endl;
    return 0;
}