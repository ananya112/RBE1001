/*
Given three different resistance values, 
compute the total parallel resistance

Behavior: The program should display a prompt for the first 
resistance value, second resistance value, and third resistance 
value on the screen and should then read the first resistance 
value, second resistance value, and third resistance value 
from the keyboard. It should then compute the corresponding
total parallel resistance and display it on the screen.

                                                                              Software Objects:

Problem’s Objects:                                                  Type                 Kind        Name
    prompt for the first resistance value                       text string            constant      none
    prompt for the second resistance value                      text string            constant      none
    prompt for the third resistance value                       text string            constant      none
    screen                                                      output device          variable      cout
    first resistance value                                       real number           variable       r1
    second resistance value                                      real number           variable       r2
    third resistance value                                       real number           variable       r3
    keyboard                                                    input device           variable       cin
    total parallel resistance                                   real number            variable       total

Problem’s Operations: 
    Output a prompt for the the first resistance value to cout 
    Input a real value from cin and store it in r1 
    Output a prompt for the the second resistance value to cout 
    Input a real value from cin and store it in r2 
    Output a prompt for the the third resistance value to cout 
    Input a real value from cin and store it in r3 
    Compute total 
        Invert real values: r1, r2, and r3 
        Add real values: 1/r1, 1/r2, and 1/r3
        Invert real value: preceeding sum  
    Output the value of total to cout
    
Algorithm:
 1. Output a prompt for the first resistance value to cout. 
 2. Input a real value from cin and store it in r1.
 3. Output a prompt for the second resistance value to cout. 
 4. Input a real value from cin and store it in r2. 
 5. Output a prompt for the third resistance value to cout. 
 6. Input a real value from cin and store it in r3.
 7. Compute total = 1 / ( (1/r1) + (1/r2) + (1/r3) ). 
 8. Output total to cout.


*/
