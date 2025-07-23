/*Decimal to Binary Conversion*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,n, binary = 0, remainder;
    cout << "Enter a decimal number: ";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 2;
        binary = binary + remainder * pow(10, i);
        n = n / 2;
        i++;
    }
    cout << "Binary equivalent: " << binary;
   
    return 0;
}
