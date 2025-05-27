#include <iostream>
using namespace std;
int main() 
{
    float a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    float largest;
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
    cout << "The largest number is: " << largest;

    return 0;
}
