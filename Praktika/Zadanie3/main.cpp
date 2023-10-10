#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    void setBrand(const std::string& carBrand) {
        brand = carBrand;
    }

    void setModel(const std::string& carModel) {
        model = carModel;
    }

    void setYear(int carYear) {
        year = carYear;
    }

    void printInfo() {
        std::cout << "Stamp: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year of release: " << year << std::endl;
    }
};

int main() {
    Car car;

    car.setBrand("Toyota");
    car.setModel("Camry");
    car.setYear(2020);

    car.printInfo();

    return 0;
}
