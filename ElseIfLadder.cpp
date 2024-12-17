#include <iostream>
#include <cstdlib>
using namespace std;

// This program shows a number guessing game

int main() {
    int magic, guess, life;
    
    magic = rand() % 10 + 1;

    for (life = 0; life < 10; life++) {
        cout << "Enter a guess: ";
        cin >> guess;
        
        if (guess == magic) {
            cout << "You win!\n";
            return 0;
        } else if (guess > magic) {
            cout << "Too high!\n";
        } else {
            cout << "Too low!\n";
        }
        
        if (life == 10) {
            cout << "You lost! The number was " << magic << ".\n";
        }
    }

    return 0;
}
