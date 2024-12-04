/* Project 1-1 

This program convert feet to meters.

Call this program FtoM.cpp

*/

#include <iostream>
using namespace std;


int main(){
    double f, m; // declare two variable on a single line

    cout << "Enter the lenght in feet : ";
    cin >> f;

    m = f / 3.28; // 1 feet equal approxi 3.28 meters
    cout << f << " feet is " << m << " meters .";

    return 0;
    }
