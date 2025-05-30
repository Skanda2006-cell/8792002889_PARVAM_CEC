#include <iostream>
using namespace std;
int main() 
{
    int n, i, rev = 0, temp, Prime1 = 1, Prime2 = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 2) 
    {
        Prime1 = 0;
    } else 
    {
        for (i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) 
            {
                Prime1 = 0;
                break;
            }
        }
    }
    temp = n;
    while (temp > 0) 
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if (rev < 2) 
    {
        Prime2 = 0;
    } else 
    {
        for (i = 2; i * i <= rev; i++) {
            if (rev % i == 0) {
                Prime2 = 0;
                break;
            }
        }
    }
    if (Prime1 == 1 && Prime2 == 1 && n != rev) {
        cout << n << " is an emirp number.\n";
    } else {
        cout << n << " is not an emirp number.\n";
    }

    return 0;
}
