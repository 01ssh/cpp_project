#include <iostream>
using namespace std;

int main(){

double earth_gravity;
double moon_gravity;
int counter;


    for(earth_gravity = 1; earth_gravity <= 100; earth_gravity++){
        moon_gravity = earth_gravity * 0.17;
        cout << " When the earth gravity is " << earth_gravity << " The moon gravity is " << moon_gravity << " \n";
        
        counter ++;

        // every 25th line print a blank line
        if(counter == 25){
            cout << "\n";
            counter = 0;
        }


     }

    return 0;
}