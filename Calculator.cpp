#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;
    
    cout << "Calculate: ";
    cin >>num1>>op>>num2;

    switch (op)
    {
        case '+':
            cout << "Answer = ";
            cout << num1 + num2;
            break;

        case '-':
            cout << "Answer = ";
            cout << num1 - num2;
            break;

        case '*':
            cout << "Answer = ";
            cout << num1 * num2;
            break;
        
        case '/':
            cout << "Answer = ";
            cout << num1 / num2;
            break;
    }

    return 0;
}