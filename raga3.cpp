/*  
   program to convert days into years,weeks and days
*/
// mention library
#include <iostream>
 using namespace std;
// main function
int main () { 
  //declarations
  int years,weeks,days,rem;
  //enter number of days
  cout << "enter number of days";
  cin >> days;
  //convert number of days to years,weeks and days
  years = days/360;
  rem = days%360;
  weeks = rem/7;
  days = rem%7;
  // display in years,weeks and days
  cout << "the number of days in years,weeks,days is = ";
  cout << years << endl;
  cout << weeks << endl;
  cout << days << endl;
  
 
     return 0;
}
