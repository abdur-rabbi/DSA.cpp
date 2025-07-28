#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i, x, n, a = 0;
    cout << "Enter vector size: ";
    cin >> x;
    cout << "Push_back " << x << " vector elements: ";
    for (i = 0; i < x; i++)
    {
        cin >> n;
        vec.push_back(n);
    }

    for (i = 0; i < x; i++)
    {

        a ^= vec.at(i);
    }
    cout << "Single number is: " << a;
    return 0;
}
