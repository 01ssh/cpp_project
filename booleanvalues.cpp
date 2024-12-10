#include <iostream>
using namespace std;


int main(){
  
    bool b;
    b = false;
    cout << "B is " << b << "\n";

    b = true;
    cout << "B is " << b << "\n";

    if(b) cout <<  " This is executed if b is true\n";

    b = false;

    if(b) cout <<  " This is not executed if b is false\n";
    
    int x = 10 > 9;


    cout << "10 > 9 is " << x << "\n";

    return 0;
    }