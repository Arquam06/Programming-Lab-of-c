//Write in C++ to check if 2 given integers, and return true if one of them is 30 or if their sum is 30

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a == 30 || b == 30 || a + b == 30)
        cout << "True";
    else
        cout << "False";

    return 0;
}