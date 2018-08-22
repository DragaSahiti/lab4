/*
 Write a program to enter length in cm and convert it into m and km.
*/

//mention librarty
# include <iostream>
using namespace std;
//main function
int main() {
	// Declarations
	float cm,m, km;
	// Enter length in cm 
	cout << "Enter length in cm";
	cin >> cm;
	// Convert it into m
	m = cm*0.01;
	// Convert it into km
	km = m*0.001;
	// Display the m and km
	cout << "The length in m is = " << m << endl;
	cout << "The length in km is = " << km << endl;
	return 0;
}

