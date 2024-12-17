#include <iostream>
#include <cstdlib>
using namespace std;

// This program  sow diff btw unsigned and signed integers

int main(){

 int magic, guess;
 magic = rand();
 
 cout << "Enter a guess: ";
 cin >> guess;

 if(guess == magic) cout << "You got it!\n";
 else cout << "Wrong!\n";
 
 
    return 0;
}
