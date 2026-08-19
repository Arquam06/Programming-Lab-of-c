//Write in C++ to find the absolute difference between n & 51. If n is greater than 51, return triple the difference.

#include <iostream>
using namespace std;

int main()
{
    int n, difference;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 51)
    {
        difference = (n - 51) * 3;
    }
    else
    {
        difference = 51 - n;
    }

    cout << "Result = " << difference;

    return 0;
}