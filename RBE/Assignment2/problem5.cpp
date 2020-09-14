/* convert a measurement given in feet to the equivalent number of 
yards, inches, centimeters, and meters with repeated inputs until 
the user enters a ‘0’, in which case the program will exit.
   Written by Ananya Gopalan for RBE 1001 -- Assignment2 -- 1/21/20
   Input: measurement given in feet
   Output:equivalent number of yards, inches, centimeters, and meters ------------------------------------------------------------------*/
                   

#include <iostream> 
using namespace std;
int main()
{
    double feet;
    do
{
 cout << "\n Enter measurement in feet: ";
 cin >> feet;
 double yards = feet / 3;
 double inches = feet *12;
 double cm = inches / 2.56;
 double m = cm / 100;
 cout << feet << " feet is equal to " << yards << " yards, " << inches<< " inches, " << cm << " centimeters, and " << m << " meters";
}
while (feet != 0);
 
}

