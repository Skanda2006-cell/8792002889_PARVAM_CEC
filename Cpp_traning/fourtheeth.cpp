#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string binary = "";
    
    cout << "Enter number: ";
    cin >> n;
    
    while(n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    
    cout << "Binary: " << binary;
    return 0;
}