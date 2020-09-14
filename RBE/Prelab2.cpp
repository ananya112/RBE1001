//prelab 2


// 1. For a motor, as the applied voltage increases the no-load speed increases linearly 
// 2. For a motor, as the applied voltage increases the stall torque increases. 
//____________________________________________________________________________________

#include <stdio.h>
#include <iostream>	
#include <cmath>
#include <math.h>   
#define PI 3.14159265
using namespace std;

/*
Slipping FWD, tipping FWD, slipping RWD, tipping RWD
 
IN                                                              OUT
-weight                                                         -how steep of a grade when traction limited
-coefficient of friction                                        -how steep of a grade when stability limited
-center of gravity (x,y)                                        -front wheel drive or rear wheel drive
-wheel diameter                                                 -speed @ slope
-motor power                                                    -torque @ wheel axle 
-wheel base

*/

int main() {
    
    //Define inputs
    double weight;
    double friction;
    double rearWheel;
    double frontWheel;
    double ground;
    double diameter;
    double power;
    double wheelBase;

    //Prompt user to input variables 
    cout << "What is the robot's weight in kilograms? \n";
    cin >> weight;
    
    cout << "What is the coefficient of friction? \n";
    cin >> friction;
    
    cout << "How far from the front wheel is the center of gravity in meters? \n";
    cin >> frontWheel;
    
    cout << "How far from the rear wheel is the center of gravity in meters? \n";
    cin >> rearWheel;
    
        cout << "How far off the ground is the center of gravity in meters? \n";
    cin >> ground;
    
    cout << "What is the diameter of the wheel in meters? \n";
    cin >> diameter;
    
    cout << "What is the length of the wheelbase in meters? \n";
    cin >> wheelBase;
    
    //calculted angles    
    double CalcSlippingAngleFWD = atan((friction*rearWheel)/((rearWheel+frontWheel)+ground*friction)); //FWD Slipping
    double CalcSlippingAngleFWDDegrees = CalcSlippingAngleFWD * 180 / PI;

    double CalcSlippingAngleRWD = atan((friction*frontWheel)/((rearWheel+frontWheel)-ground*friction)); //RWD Slipping
    double CalcSlippingAngleRWDDegrees = CalcSlippingAngleRWD * 180 / PI;
    
    double CalcTippingAngle =atan(rearWheel/ground) ; //Tipping is independent of drive
    double CalcTippingAngleDegrees= CalcTippingAngle * 180 / PI;

    //Output values
    cout << "The slipping angle for front wheel drive is " << CalcSlippingAngleFWDDegrees << "degrees. \n";
    cout << "The slipping angle for rear wheel drive is " << CalcSlippingAngleRWDDegrees << "degrees. \n";
    cout << "The tipping angle for front or rear wheel drive is " << CalcTippingAngleDegrees << "degrees. \n";

    //Worst case scenario 
    double Fa_SlipFWD =  weight * 9.8 * sin(CalcSlippingAngleFWD);
    double Fa_SlipRWD =  weight * 9.8 * sin(CalcSlippingAngleRWD);
    double Fa_Tip =  weight * 9.8 * sin(CalcTippingAngle);
    
    if (Fa_SlipFWD > Fa_SlipRWD && Fa_SlipFWD > Fa_Tip) {
        cout << "The front wheel drive slipping is the worst case scenario. \n";
    }
    else if (Fa_SlipRWD > Fa_SlipFWD && Fa_SlipRWD > Fa_Tip) {
        cout << "The rear wheel drive slipping is the worst case scenario. \n";
    }
    else {
        cout << "The wheel drive tipping is the worst case scenario. \n";
    }
    
    //Compute torques
    double torque_SlipFWD = Fa_SlipFWD * (diameter/2);
    double torque_SlipRWD = Fa_SlipRWD * (diameter/2);
    double torque_Tip = Fa_Tip* (diameter/2);
    
    //Output torque
    cout << "The torque for front wheel drive silpping is " << torque_SlipFWD << " Newton meters. \n";
    
    cout << "The torque for rear drive slipping is " << torque_SlipRWD << " Newton meters. \n";
    
    cout << "The torque for tipping is " << torque_Tip << " Newton meters. \n";

}




