#include <iostream>
using namespace std;

// This program  sow diff btw unsigned and signed integers

int main(){

 int a, b;

 cout << "Enter a denominator: ";
 cin >> a;
 cout << "Enter a numerator: ";
 cin >> b;
 
 
if(b) cout << a/b << "\n";
else cout << "Cannot divide by zero!\n";
 
    return 0;
}

