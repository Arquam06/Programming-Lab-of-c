//Write in C++ to check if it is possible to add 2 integers to get the third from three given integers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a + b == c || a + c == b || b + c == a)
        cout << "True";
    else
        cout << "False";

    return 0;
}