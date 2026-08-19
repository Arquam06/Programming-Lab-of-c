//Write in C++ to check if a 2 given non negative integers to have the same last digit.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two non-negative integers: ";
    cin >> a >> b;

    if (a % 10 == b % 10)
        cout << "True";
    else
        cout << "False";

    return 0;
}