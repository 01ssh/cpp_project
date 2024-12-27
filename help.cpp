#include <iostream>
using namespace std;


// program to demonstrate switch statement

int main(){

int choice;

cout << "Help on:\n";
cout << "1. if\n";
cout << "2. switch\n";
cout << "Choose one: ";
cin >> choice;

switch(choice){
    case 1 :
     cout << "The if: \n\n";
     cout << "if(condition)statement; \n";
     cout << "else statement;\n";
     break;
    case 2:
     cout <<"The switch: \n\n";
     cout <<"switch(expression);\n";
     cout <<"case constant;\n";   
     cout <<"constant statement;\n";   
     cout <<"break;\n";   
     cout <<"  // ...;\n";   
     cout <<"};\n";   
     break;
    default:
     cout << "Selection not found";
}


    return 0;
}