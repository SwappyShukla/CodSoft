#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast < unsigned int > (time(0)));
    int r = rand() % 100 + 1;
    int guess;
    bool guessedCorrectly = false;

    cout << "test your luck and try to guess a number (between 1 and 100): ";
    while (!guessedCorrectly) {
        cin >> guess;
        if (guess < r) {
            cout << "Too low! Try again: ";

        } else if (guess > r) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed it right!" << endl;
            guessedCorrectly = true;
        }
    }

    return 0;
}
