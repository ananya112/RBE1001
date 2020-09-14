/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
using namespace std;
#include <iostream>


void setup() {                
   
}

void loop()
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

       exit (0);
    
}

