/* This program find the sum of first n positive integers and to check whether n is prime.
   Written by Ananya Gopalan for RBE 1001 -- Assignment3 -- 1/21/20
   Input: integer value of n, Output: whether n is prime, and the sum 
   */
                   

#include <iostream> 
#include <cmath>
using namespace std;

bool isPrime(int num){
    
    if(num == 5 || num == 3 || num == 2 || num ==1){
        return true;
    }
     if(num%2 == 0){
        return false;}
    
    else if (num%3 == 0){
        return false;}
        
    else if (num%5 == 0){
        return false;}
        
    else if (num%7 == 0){
        return false;}
        
    else if (num%9 == 0){
        return false;}
        
    else if (num%11 == 0){
        return false;}
        
    else return true;
}

int add(int num){
  int i;
  int sum;
  for( i = 1; i <= num; i++){
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
   
   if (isPrime(num)){
      cout<< "Number is prime \n ";
   }
   
   else cout <<"Number is not prime\n";

   cout <<add(num) << " is the sum \n";
   
}
