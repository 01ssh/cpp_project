#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double Principal; // original amount
    double IntRate; // interest rate such as 0.075
    double PayPerYear; // payments per year
    double NumYears; // number of years
    double Payment; // the regular payment
    double numer, denom; // temporary variables
    double b, e; // base and exponent

    cout << "Enter Principal: ";
    cin >> Principal;
    cout << "Enter Interest Rate (as a decimal, e.g., 0.04 for 4%): ";
    cin >> IntRate;
    cout << "Enter Number payments per Year: ";
    cin >> PayPerYear;
    cout << "Enter Number of Years: ";
    cin >> NumYears;
    
    numer = IntRate * Principal / PayPerYear;

    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;
    denom = 1 - pow(b, e);

    Payment = numer / denom;

    // Finished calculations

    cout << "Payment is " << Payment << "\n";

    return 0;
}
