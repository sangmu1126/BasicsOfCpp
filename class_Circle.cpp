#include <iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        Circle(double radius);
        Circle();
        ~Circle();
        Circle(const Circle& circle);
        void setRadius(double radius);
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
};

Circle::Circle(double rds)
: radius(rds) {}

Circle::Circle():radius(0) {}

Circle::Circle(const Circle& circle)
: radius(circle.radius) {}

void Circle::setRadius(double value) {
    radius = value;
}

double Circle::getRadius() const{
    return radius;
}

double Circle::getArea() const{
    double PI = 3.14;
    return radius * radius * PI;
}

double Circle::getPerimeter() const{
    double PI = 3.14;
    return radius * 2 * PI;
}


int main()
{
    Circle circle1(5.2);
    cout << "Radius" << circle1.getRadius() << endl;
    cout << "Area" << circle1.getArea() << endl;
    cout << "Perimeter" << circle1.getPerimeter() << endl;
    
}