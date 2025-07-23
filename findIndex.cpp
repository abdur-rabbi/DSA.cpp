/*C++ program to find the maximum and minimum element in an array
 and their respective indices*/ 

#include <iostream>
using namespace std;
int main()
{
    int i, x, max, min, a, b;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    cout << "Input " << x << " array elements: ";
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cout << "\nInput array elements are: ";
    for (i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }

    max =  min =arr[0];
    for (i = 0; i < x; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "\nMaximum element is: " << max
         << "\nMinimum element is: " << min << endl;

    for (i = 0; i < x; i++)
    {
        if (max == arr[i])
        {
            a = i;
        }
        if (min == arr[i])
        {
            b = i;
        }
    }
    cout << "Maximum array index is: " << a << "\nMinimum array index is :" << b << endl;
}