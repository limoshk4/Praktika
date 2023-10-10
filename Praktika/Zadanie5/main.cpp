#include <iostream>

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14159265359 * radius * radius;
    }
};

int main() {
    Circle circle;
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    circle.setRadius(radius);

    std::cout << "Area of the circle: " << circle.getArea() << std::endl;

    return 0;
}
