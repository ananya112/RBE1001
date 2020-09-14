/* write declarations to declare each variable to have the specified type and initial value
   Written by Ananya Gopalan for RBE 1001 -- Assignment2 -- 1/21/20
   input: the voltage and three resistances 
   output: calculated current 
  */
  
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

 cout << "Enter the value of the voltage: \n";
 double voltage;
 cin >> voltage;
 
 //7. Compute total = 1 / ( (1/r1) + (1/r2) + (1/r3) ) . 
 double total_resistance  =1 / ( (1/r1) + (1/r2) + (1/r3) );
 
 double current = voltage/total_resistance;
 
 cout << "the total current in the circuit is: \n" << current;
 

    
}