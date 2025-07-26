                        /* Array Intersection */
#include <iostream>
using namespace std;
int main()
{
    int i, j, x, y;
    cout << "Input two array lengths: ";
    cin >> x >> y;
    int arr1[x], arr2[y];
    cout << "Input first array elements: ";
    for (i = 0; i < x; i++)
    {
        cin >> arr1[i];
    }
    cout << "Input second array elements: ";
    for (j = 0; j < y; j++)
    {
        cin >> arr2[j];
    }
    cout << "Array Intersection: ";
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
     cout << "No intersection found, because there is no matching elements " << endl;
    return 0;
}