#include <iostream>
using namespace std;

int main (){
   
   double size;
   int age, height, weight, socialNumber;

    cout << "Enter your social number : \n";
    cin >> socialNumber;

    cout << "Enter your age : \n";
    cin >> age;

    cout << "Enter your height : \n";
    cin >> height;



   if (height > 90 < 250)
   {
        cout << "I'm surprise, make sure your height is correctly entered\n";
        cout << "Enter your height \n";
        cin >> height;
   }
   
   if (age > 12 < 99)
   {
        cout << "I'm surprise, make sure your age is correctly entered\n";
        cout << "Enter your age \n";
        cin >> age;
   }
   
    cout << age << "\n";
    cout << height;
    

    return 0;
}