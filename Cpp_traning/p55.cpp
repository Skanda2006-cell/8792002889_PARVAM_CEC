//use protected members create a class base with a protected variable.derive a class derived and use the the protected variable in public fuction
#include <iostream>
using namespace std;
class Base {
protected:          
    int secretNumber;  
};
class Derived : public Base {  
public:
    void setNumber(int num) {
        secretNumber = num;
    }
    
    void showNumber() {
        cout << "The number is: " << secretNumber << endl;
    }
};

int main() {
    Derived obj;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    obj.setNumber(num);  
    obj.showNumber();    
    return 0;
}