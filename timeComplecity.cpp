/*Time Complexity Demonstration*/

#include <iostream>
using namespace std;

int main() {
    int i,j,x,count=0;
    cout<< "Enter the number: ";
    cin>>x;
    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            count++;
        }
    }
    cout<<"x= "<<x<<"\nTotal iterations: " << count << endl;
    return 0;
}