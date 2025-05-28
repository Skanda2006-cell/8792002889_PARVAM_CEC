#include <iostream>
using namespace std;
class Rectangle {
    private:
        float length, width;
    public:
        void setDimensions(float l, float w) {
            length = l;
            width = w;
        }
        float calculateArea() {
            return length * width;
        }
};
class Triangle {
    private:
        float base, height;
    public:
        void setDimensions(float b, float h) {
            base = b;
            height = h;
        }
        float calculateArea() {
            return 0.5 * base * height;
        }
};

int main() {
    Rectangle rect;
    Triangle tri;
    float l, w, b, h;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    rect.setDimensions(l, w);
    cout << "Area of rectangle: " << rect.calculateArea() << endl;
    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    tri.setDimensions(b, h);
    cout << "Area of triangle: " << tri.calculateArea() << endl;
    return 0;
}