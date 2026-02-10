#include <iostream>
using namespace std;

class Shape {
public:
    virtual void displayDetails() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void displayDetails() override {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void displayDetails() override {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    void displayDetails() override {
        cout << "Shape: Triangle" << endl;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {

    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 7.0);

    for (int i = 0; i < 3; i++) {
        shapes[i]->displayDetails();
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
