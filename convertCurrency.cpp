#include <iostream>
using namespace std;

int main (){

    double eur, usd, gbp;

    cout << "Please enter the amout to convert in $ and £\n";
    cin >> eur;

    usd = eur * 2.5;
    gbp = eur * 0.70;

    cout << eur << " euros make" << usd << " in USD and " << gbp << " in GBP\n";


    return 0;
};

