/*Bitwise Operators Demonstration */

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input tow integer number: ";
    cin >> a >> b;
    cout << "AND(&) operation: " << (a & b) << endl;
    cout << "OR(|) operation: " << (a | b) << endl;
    cout << "XOR(^) operation: " << (a ^ b) << endl;
    cout << "Left shift operation: " << (4 << 2) << endl;
    cout << "Right shift operation: " << (8 >> 2) << endl;
}