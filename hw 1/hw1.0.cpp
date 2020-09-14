/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;
/*  This program must be able to read input from the user regarding 3 individual
    resistance values. Then the program must compute the equivalence resistance 
    by taking the inverse of the sum of the inverses of the resistance values. 
    Finally the program must output this value back to the user. 
    
    The program must prompt the user for resistance values 
    There will need to be 3 instance of cin, one for each resistance value
    Each resistor should be stored in their own individual double 
    The equivalence resistance must take the inverse of the sum of 
    inverse resistances. 
    
    Algorithm:
    Prompt user for 1 resistor
    Read in 1 resistor
    prompt user for 2 resistor
    Read in 2 resistor
    Prompt user for 3 resistor
    Read in 3 resistor
    Perform calculation
    Output value
*/

/* This program calculates the equivalent resistance of 3 resistors in parallel
   
   Written by Tyler Looney for RBE 1001 -- Homework 1 -- Jan 10, 2020
   
   Input: 3 resistor values in ohms
   Output: Equivalence resistance of the 3 in parallel in ohms
*/
int main()
{
   //1. Prompt for the value of the first resistor in ohms
   cout << "Please enter a value for the first resistor in ohms: ";
   
   //2. Enter a valid resistor value 
   double R1;
   cin >> R1;
   
   //3.Prompt for the value of the second resistor in ohms
   cout << "Please enter a value for the first resistor in ohms: ";
   
   //4. Enter a valid resistor value 
   double R2;
   cin >> R2;
   
   //5.Prompt for the value of the second resistor in ohms
   cout << "Please enter a value for the third resistor in ohms: ";
   
   //6. Enter a valid resistor value 
   double R3;
   cin >> R3;
   
   //7. Calculate the equivalent resistance
   double equivRes = 1/((1/R1) + (1/R2) + (1/R3));
   
   //8. Output the eqivalent resistance
   cout << "Equivalent Resistance: " << equivRes;


    return 0;
}
