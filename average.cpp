/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int number1;
    
    cout << "Enter average: ";
    cin >> number1;
    
    if (number1 >= 90)
        cout << "A";
    else if (number1 >= 80)
        cout << "B";
    else if (number1 >= 70)
        cout << "C";
    else
        cout << "F";
        
        
    return 16;
}