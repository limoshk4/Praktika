#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    void setTitle(const std::string& bookTitle) {
        title = bookTitle;
    }

    void setAuthor(const std::string& bookAuthor) {
        author = bookAuthor;
    }

    void setYear(int bookYear) {
        year = bookYear;
    }

    void printInfo() {
        std::cout << "Name book: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Year of publication: " << year << std::endl;
    }
};

int main() {
    Book book;

    book.setTitle("The Three Musketeers");
    book.setAuthor("Alexander Dumas");
    book.setYear(1973);

    book.printInfo();

    return 0;
}
