#include <iostream>
using namespace std;

int tripleNumber(int);
int main ()
{
    int result = tripleNumber(5);
    cout << "The answer is: " << result;
}

int tripleNumber (int x)
{
    int result= x * x * x;
}
