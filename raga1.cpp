/*  program to enter temperature in celsius and convert it into fahrenheit
*/
//mention library
# include <iostream>
using namespace std;
// main function
int main() {
   //declarations
  float celsius, fahrenheit;
   //enter temperature in celsius 
 cout <<"enter temperature in celsius";
 cin >> celsius;
   // convert it into fahrenheit
   fahrenheit = celsius*5/9;
   //display the temperature in fahrenheit
   cout << "temperature in fahrenheit is = " <<fahrenheit << endl;
   return 0;

}
