//without override
#include<iostream>
using namespace std;
class shape {
    public:
      virtual void calculateArea(){
        cout << "Area not defined for generic shape.";
      }

};

class Circle:public shape {
private:
    float radius;

public:
    void inputRadius() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() {
        float area = 3.1416 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle:public shape {
private:
    float length;
    float width;
public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }
    void displayArea() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};
class triangle:public shape {
private:
    float base;
    float height;
public:
    void setValues(float b, float h) {
        base = b;
        height = h;
    }
    void displayArea() {
        cout << "Area of Rectangle: " <<0.5*base*height << endl;
    }
};
int main()
{
    Circle c;
    c.inputRadius();
    c.calculateArea();

    Rectangle rect;
    float l, w;
    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    rect.setValues(l, w);
    rect.displayArea();

    triangle t;
    float b,h;
    cout << "\nEnter length and width of triangle: ";
    cin >> b >> h;
    t.setValues(b, h);
    t.displayArea();
}