                           /* Linear Search and find Unique Elements */
#include <iostream>
using namespace std;
void search(int arr[], int x)
{
    int i, j, n;
    cout << "\nInput element to search: ";
    cin >> n;
    for (j = 0; j < x; j++)
    {
        if (arr[j] == n)
        {
            cout << "Element found at index: " << j << endl;
            break;
        }
    }
    if (j == x)
    {
        cout << "Element not found" << endl;
    }
  
    cout << "Unique elements: ";
    for (i = 0; i < x; i++)
    {
        bool unique = true;
        for (j = 0; j < x; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }
        if (unique == true)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int i, x;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    cout << "Array elements: ";
    for (i = 0; i < x; i++)
    {
        arr[i] = rand() % 10 + 5;
        cout << arr[i] << " ";
    }

    search(arr, x);
    return 0;
}
