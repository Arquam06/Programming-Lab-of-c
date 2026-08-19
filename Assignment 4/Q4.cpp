//Write in C++ to Find the largest number among 3 numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, largest;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    cout << "Largest number = " << largest;

    return 0;
}