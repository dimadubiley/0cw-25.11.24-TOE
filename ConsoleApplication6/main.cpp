#include <iostream>
#include "Tree.h"
using namespace std;

double power(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1.0;
    }
    if (exponent > 0)
    {
        return base * power(base, exponent - 1);
    }
    else
    {
        return 1.0 / power(base, -exponent);
    }
}

int main() 
{
    cout << power(2, 3) << endl;
    cout << power(2, 0) << endl;
    cout << power(2, -2) << endl;
}
