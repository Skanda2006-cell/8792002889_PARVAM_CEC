#include <iostream>
#include <string>
using namespace std;
bool isAutobiographical(string numStr) {
    int length = numStr.length();
    int digits[10] = {0};
    int counts[10] = {0};  
    int i = 0;
    while (i < length) {
        digits[i] = numStr[i] - '0'; 
        i++;
    }
    i = 0;
    while (i < length) {
        int count = 0;
        int j = 0;
        while (j < length) {
            if (digits[j] == i) {
                count++;
            }
            j++;
        }
        counts[i] = count;
        i++;
    }
    i = 0;
    while (i < length) {
        if (digits[i] != counts[i]) {
            return false; 
        }
        i++;
    }

    return true;  
}

int main() {
    string number;
    cout << "Enter a number: ";
    cin >> number;

    if (isAutobiographical(number)) {
        cout << number << " is an autobiographical number." << endl;
    } else {
        cout << number << " is NOT an autobiographical number." << endl;
    }

    return 0;
}
