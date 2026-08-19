//Write in C++ to Check if a number is odd or even

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "The number is Even";
    else
        cout << "The number is Odd";

    return 0;
}