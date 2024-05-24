#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string genre;
    int publicationYear;

public:
    void setTitle(const string& newTitle) {
        title = newTitle;
    }

    string getTitle() const {
        return title;
    }

    void setAuthor(const string& newAuthor) {
        author = newAuthor;
    }

    string getAuthor() const {
        return author;
    }

    void setGenre(const string& newGenre) {
        genre = newGenre;
    }

    string getGenre() const {
        return genre;
    }

    void setPublicationYear(int newPublicationYear) {
        if (newPublicationYear > 0) {
            publicationYear = newPublicationYear;
        }
        else {
            cout << "Publication year must be positive." << endl;
        }
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    void printInfo() const {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int main() {
    Book book;
    book.setTitle("Happy Smile");
    book.setAuthor("Kris MorningStar");
    book.setGenre("Horror");
    book.setPublicationYear(2004);

    book.printInfo();

    return 0;
}
