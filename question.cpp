#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    string color;
    double area;

protected:
    void setArea(double a) {
        area = a;
    }

public:
    virtual ~Shape() {} 

    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    double getArea() const {
        return area;
    }
    virtual void calculateArea() = 0;
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r, const string& c) : radius(r) {
        setColor(c);
    }

    void calculateArea() override {
        setArea(M_PI * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w, const string& c)
        : length(l), width(w) {
        setColor(c);
    }

    void calculateArea() override {
        setArea(length * width);
    }
};

int main() {
    Shape* shape1 = new Circle(5.0, "Red");
    Shape* shape2 = new Rectangle(4.0, 6.0, "Blue");

    shape1->calculateArea();
    shape2->calculateArea();

    cout << "Circle Color: " << shape1->getColor()
         << ", Area: " << shape1->getArea() << endl;

    cout << "Rectangle Color: " << shape2->getColor()
         << ", Area: " << shape2->getArea() << endl;

    delete shape1;
    delete shape2;

    return 0;
}

