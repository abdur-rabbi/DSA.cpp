/*Vector Demo Implementation, Resizing and Input*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i, n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    // vec.resize(n);
    cout <<"Push back "<<n<<" elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    cout << "You entered: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\nSize of vector: " << vec.size() << endl;
    cout << "Capacity of vector: " << vec.capacity() << endl;
    return 0;
}