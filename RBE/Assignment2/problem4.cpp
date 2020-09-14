/* This program find the parallel resistance of three resistors.
   Written by Ananya Gopalan for RBE 1001 -- Assignment1 -- 1/21/20
   Input: measurement given in feet
   Output:equivalent number of yards, inches, centimeters, and meters ------------------------------------------------------------------*/
                   

#include <iostream> 
using namespace std;
int main()
{

 cout << "Enter measurement in feet: ";
 double feet;
 cin >> feet;
 
 double yards = feet / 3;
 double inches = feet *12;
 double cm = inches / 2.56;
 double m = cm / 100;
 cout << feet << " feet is equal to " << yards << " yards, " << inches<< " inches, " << cm << " centimeters, and " << m << " meters";
}