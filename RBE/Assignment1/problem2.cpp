/* This program find the parallel resistance of three resistors.
   Written by Ananya Gopalan for RBE 1001 -- Assignment1 -- 1/17/20
   Input: value of all three of the resistors, Output: the total parallel resistance ------------------------------------------------------------------*/
                   

#include <iostream> 
using namespace std;
int main()
{
 //1. Output a prompt for the first resistance value to cout. 
 //2. Input a real value from cin and store it in r1
 cout << "Enter the value of the first resistor: \n";
 double r1;
 cin >> r1;
 
 //3. Output a prompt for the second resistance value to cout. 
 //4. Input a real value from cin and store it in r2. 
 cout << "Enter the value of the second resistor: \n";
 double r2;
 cin >> r2;
 
 //5. Output a prompt for the third resistance value to cout. 
 //6. Input a real value from cin and store it in r3
 cout << "Enter the value of the third resistor: \n";
 double r3;
 cin >> r3;

 //7. Compute total = 1 / ( (1/r1) + (1/r2) + (1/r3) ) . 
 double total  =1 / ( (1/r1) + (1/r2) + (1/r3) );
 
 //8. Output total to cout.
 cout << "The combined resistance is: \n" << total;
}