#include <iostream>
using namespace std;


// program to demonstrate switch statement

int main(){

int num;

cout << " Enter a num : ";
cin >> num;

switch(num){
    case 1:
     cout << "The number is 1\n";
     break;
    case 2:
     cout << "The number is 2\n";
     break;
    case 3:
     cout << "The number is 3\N";
     break;
    default:
     cout << "You have choose another number";  
}

    return 0;
}