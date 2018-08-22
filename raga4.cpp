/*
    program to enter two angles of a triangle and find the third anglr 
*/
// mention library
#include <iostream>
using namespace std;
// main function
 int main() {
  // declarations
float x,y,z;
  // enter two angles of a triangle
  cout << "enter two angles,x and y of a triangle";
  cin >> x;
  cin >> y;
  // find the third angle of the triangle
   z = 180-(x+y);
  // display the third angle of the triangle
  cout << "the third angle of the triangle z is " << z << endl;
  
    return 0;
}
