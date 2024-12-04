#include <iostream>
using namespace std;

int main (){
    double f, m;
    int counter;

    counter = 0;

    for(f=1.0; f <=100; f++){
        m = f /3.28;
        cout << f << " feet is " << m << " meters.\n";

    counter ++;

    // every 10th line, print a blank line
    if(counter == 25){
        cout << "\n";
        counter = 0;
        
        }

    }

    return 0;
}