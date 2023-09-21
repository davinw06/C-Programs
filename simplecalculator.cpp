#include <iostream>
using namespace std;

int main()
{
    char op;
    float x, y;
    float result;
    cout << "Calculate: ";
    cin >> x >> op >> y;
    if (op=='+')
    {
        result = x + y;
    }
    if (op=='-')
    {
        result = x - y;
    }
    if (op=='*')
    {
        result = x * y;
    }
    if (op=='/')
    {
        result = x / y;
    }
    cout << "The Answer is: " << result;
    cout << "\n\n";
    main ();
    
    return 0;
}