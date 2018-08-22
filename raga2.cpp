/*  program to enter temperature in fahrenheit and convert it into celsius
*/
//mention library
# include <iostream>
using namespace std;
// main function
int main() {
   //declarations
  float celsius, fahrenheit;
   //enter temperature in fahrenheit 
 cout <<"enter temperature in fahrenheit";
 cin >> fahrenheit;
   // convert it into celsius
  celsius = fahrenheit*1.8;
   //display the temperature in celsius
   cout << "temperature in celsius is = " <<celsius << endl;
   return 0;

}
