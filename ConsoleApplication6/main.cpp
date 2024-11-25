#include <iostream>
using namespace std;

int power(int num, int step)
{
    if (step == 1)
    {
        return num;
    }
    return num * power(num, step - 1);
}

int main()
{
    cout << power(2, 3);
}