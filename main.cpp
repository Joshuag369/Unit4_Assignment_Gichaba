/* Joshua Gichaba
COSC 1436 Programming Fundamentals 1
Repl.it
This program accepts input from the user while the value entered does not equal -1 which is the exit value. */

#include<iomanip>
#include <iostream>
#include "stdafx.h"
using namespace std;

#include "Input_Validation_Extended.h"

int main()

{
  //define variable and define count
int num1 = 0;
int count = 0;

//declared the loop
 do {
   count++;

  cout << "Please enter a number, press -1 to exit " << endl; 
  cin >> num1;
// declared these expressions as double
  double mult = num1 * num1;
  double div = num1 / num1;

// output the equations 
  cout << "The number you've entered is: " << num1 << endl;

 cout << num1 << " times " << num1 << " = " << mult << endl;

 cout << num1 << " divided by " << num1 << " = " << div << endl;

 cout << num1 << " plus 3, divided by 5 = " << (num1 + 3) / 5 << endl;

 cout << num1 << " plus 3, divided by 5, plus " << num1 << " plus 7, divided by 2 = " <<
 ((num1 + 3) / 5) + ((num1 + 7) / 2) << endl;    
 

} while (num1 != -1);

cout << "You went through the loops " << count << " times." << endl; 

// When I entered the value 0 it ran the calculations however when I input 'J' it continously ran the calculations for 0. 

    int stop = 0;


    while (stop != -1)

    {

        cout << "\n";

        cout << "\t Ordinal Number Generator in C++";

        cout << "\n";

        cout << "\n";

 

        cout << "Program will continue to repeat Hello Ordinals until user enters -1) :\n";

        stop = validateInt(stop);

 

 

        for (int i = 1; i <= stop; i++)

        {

            
            if ((i % 100) == 11 || ((i % 100) == 12) || ((i % 100) == 13))

            {

                cout << i << "th hello\n";

            }

            else if ((i % 10) == 1)

            {

                cout << i << "st hello\n";

            }

            else if ((i % 10) == 2)

            {

                cout << i << "nd hello\n";

            }

            else if ((i % 10) == 3)

            {

                cout << i << "rd hello\n";

            }

            else

            {

                cout << i << "th hello\n";

            }

        }

    }

    return stop++;

 

    return 0;

}