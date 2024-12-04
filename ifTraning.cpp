#include <iostream>
using namespace std;

int main (){

    double cm, m, km;

    cout << " Please enter cm to convert in m and km\n";
    cin >> cm;

    m = cm /100;
    km = cm /1000;

    cout << cm << " cm is " << m << " meters and " << km << " kilometers\n";

    return 0;
}

