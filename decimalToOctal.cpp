/*Decimal to Octal Conversion*/

#include <iostream>
using namespace std;
int main()
{
    int i, x, octal = 0, pow = 1, remainder;
    cout << "Input a decimal number: ";
    cin >> x;
    while (x > 0)
    {
        remainder = x % 8;
        octal += remainder * pow;
        x /= 8;
        pow *= 10;
    }
    cout << "Octal equivalent: " << octal;
    return 0;
}