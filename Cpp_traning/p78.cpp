#include <iostream>
using namespace std;
int main() 
{
    int n, i,temp, rev = 0, Prime = 1, RevPrime = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 2) {
        Prime = 0;
    } else 
    {
        i = 2;
        while (i * i <= n) {
            if (n % i == 0) {
                Prime = 0;
                break;
            }
            i++;
        }
    }
    temp = n;
    while (temp > 0) 
    {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }
    if (rev < 2) {
        RevPrime = 0;
    } else {
        i = 2;
        while (i * i <= rev) {
            if (rev % i == 0) {
                RevPrime = 0;
                break;
            }
            i++;
        }
    }
    if (Prime == 1 && RevPrime == 1 && n != rev) {
        cout << n << " is an emirp number." << endl;
    } else {
        cout << n << " is not an emirp number." << endl;
    }
    return 0;
}
