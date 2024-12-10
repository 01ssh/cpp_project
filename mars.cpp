#include <iostream>
#include <curses.h>

using namespace std;
 
int main(){

   double distance, lightSpeed, delay, delay_in_min;
   distance = 34000000.0; // Distance in miles
   lightSpeed = 186000.0; // Speed of light in miles per second

   delay = distance / lightSpeed;

   cout << "Time delay when talking to mars: " << delay << " seconds\n";
   delay_in_min = delay / 60.0;
   cout << "Time delay when talking to mars: " << delay_in_min << " minutes\n";

   // on my own, i will calculate the bi direction conversion delay

   double delay_ar = delay * 2;
   double delay_in_min_ar = delay_in_min * 2;

     cout << "Time delay directional when talking to mars: " << delay_ar << " seconds\n";
   cout << "Time delay BI directional when talking to mars: " << delay_in_min_ar << " minutes\n";
   
  
  

    return 0;
}