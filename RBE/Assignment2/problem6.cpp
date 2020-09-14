/* Write a program that initializes x to 8.1 and then increments it by 0.1 to nd to the
nearest 0.1 foot the length of the longest ladder that can be carried around the corner. 
   Written by Ananya Gopalan for RBE 1001 -- Assignment2 -- 1/21/20
   input: length 1, length 2, and x
   output: calculated longest length
  */
  
#include <stdio.h>
#include <math.h>
using namespace std;
#include <iostream>

int main()
{
    double l = 2.2;   //picked arbritrary value for l and l2 so it goes through the while loop 
    double l2 = 2.1;
    double x = 8.1;
    
    while(l > l2){
        
        l = x + (10*x)/(sqrt( pow( x,2) -64));
        x += .1;
        l2 = x + (10*x)/(sqrt( pow( x,2) -64));
        
       }
       
       cout << l; 
    
}
