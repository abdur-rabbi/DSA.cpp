/*Binary to Decimal Conversion*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, decimal = 0, i = 0, remainder;
    cout << "Enter a binary number: ";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        decimal = decimal + remainder * pow(2, i);
        n = n / 10;
        i++;
    }
    cout << "Decimal equivalent: " << decimal;
    return 0;
}