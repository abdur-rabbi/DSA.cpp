/* Program to find the maximum subarray sum using Brute Force algorithm */

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, st, end;
    cout << "Input array length: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nSubarray is: " << endl;
    for (st = 0; st < n; st++)
    {
        for (end = st; end < n; end++)
        {
            for (j = st; j <= end; j++)
            {
                cout << arr[j];
            }
            cout << " ";
        }
        cout << endl;
    }
    int maxSum = arr[0];
    for (st = 0; st < n; st++)
    {
        int sum = 0;
        for (end = st; end < n; end++)
        {
            sum += arr[end];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    cout << "MaxSum is: " << maxSum;
}