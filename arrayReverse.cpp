#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "\nReversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int i, x, l = 0;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    cout << "Array elements: ";
    for (i = 0; i < x; i++)
    {
        arr[i] = rand() % 10 + 5;
        cout << arr[i] << " ";
    }
    cout << "\nReversed array using loop: ";
    for (i = x - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    // reversesing by length
    for (i = 0; i < x; i++)
    {
        l++;
    }
    cout << "\nReversed array using length: ";
    for (i = l - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    reverseArray(arr, x);
    return 0;
}