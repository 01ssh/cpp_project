#include <iostream>
using namespace std;

int main(){

double jupiter, earth;
int counter;

    for(jupiter = 1; jupiter < 100; jupiter ++){
    earth = jupiter * 12;
    cout << jupiter << " year on jupiter to make full circuit around the Sun wil take " << earth << " on earth to do the same\n";
    counter ++;
     // every 5th line print a blank line
    
    if(counter == 5){
        cout << " \n";
        counter = 0;
    }
}
    return 0;
}