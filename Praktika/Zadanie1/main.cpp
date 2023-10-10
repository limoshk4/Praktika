#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    float averageGrade;

public:
    void setName(const std::string& studentName) {
        name = studentName;
    }

    void setAge(int studentAge) {
        age = studentAge;
    }

    void setAverageGrade(float studentGrade) {
        averageGrade = studentGrade;
    }

    void printInfo() {
        std::cout << "NAME: " << name << std::endl;
        std::cout << "AGE: " << age << std::endl;
        std::cout << "AVERGE SCORE: " << averageGrade << std::endl;
    }
};

int main() {
    Student student;

    student.setName("BEKA KOZAHMETOV");
    student.setAge(20);
    student.setAverageGrade(4.5);

    student.printInfo();

    return 0;
}
