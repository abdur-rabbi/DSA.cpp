/* Find the unique element in an array */

#include <iostream>
using namespace std;
int search(int nums[], int n)
{
    int j, a = 0;
    for (j = 0; j < n; j++)
    {
        a ^= nums[j];
    }
    return a;
}
int main()
{
    int i, x;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    cout << "Enter " << x << " array elements:  ";
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cout << "The unique number is: " << search(arr, x) << endl;
}