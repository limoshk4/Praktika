#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double rectangleWidth) {
        width = rectangleWidth;
    }

    void setHeight(double rectangleHeight) {
        height = rectangleHeight;
    }

    double getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;

    rectangle.setWidth(5.0);
    rectangle.setHeight(3.0);

    double area = rectangle.getArea();

    std::cout << "The area of the triangle: " << area << std::endl;

    return 0;
}
