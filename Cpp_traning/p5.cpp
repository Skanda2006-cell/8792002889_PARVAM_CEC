//summation of the numbers given by the user
#include <iostream>
using namespace std;
int main()
{
    int n,num,sum = 0;

    cout << "How many numbers do you want to sum? ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for ( int i = 0; i < n; i++) {
        cin >>num;
        sum +=num;
    }
    cout << "The total sum : " << sum;

    return 0;
}
