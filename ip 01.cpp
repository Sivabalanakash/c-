#include <iostream>
using namespace std;
class Shape {
public:
    void print_shape() {
        cout << "This is a shape" << endl;
    }
};
class Polygon : public Shape {
public:
    void print_shape() {
        cout << "Polygon is a shape" << endl;
    }
};
class Rectangle : public Polygon {
public:
    void print_shape() {
        cout << "Rectangle is a polygon" << endl;
    }
};
class Triangle : public Polygon {
public:
    void print_shape() {
      cout << "Triangle is a polygon" << endl;
    }
};
class Square : public Rectangle {
public:
    void print_shape() {
        cout << "Square is a Rectangle" << endl;
    }
};
int main() {
    Shape shape;
    shape.print_shape();  
    Polygon polygon;
    polygon.print_shape();  
    Rectangle rectangle;
    rectangle.print_shape();  
    Triangle triangle;
    triangle.print_shape();  
    Square square;
    square.print_shape();  
    
    return 0;
}
