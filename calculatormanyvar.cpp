#include <iostream>
using namespace std;

int main()
{
    char op;
    float x, y;
    float result, result1, result2, result3;
    cout << "Calculate: ";
    cin >> x >> op >> y;
    result = x + y;
    result1 = x - y;
    result2 = x * y;
    result3 = x / y;
    if (op=='+')
    {
        cout << "The Answer is: " << result;
    }
    if (op=='-')
    {
        cout << "The Answer is: " << result1;
    }
    if (op=='*')
    {
        cout << "The Answer is: " << result2;
    }
    if (op=='/')
    {
        cout << "The Answer is: " << result3;
    }
    cout << "\n\n";
    main ();
    
    return 0;
}