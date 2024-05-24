#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double averageGrade;

public:
    void setName(const string& newName) {
        name = newName;
    }

    string getName() const {
        return name;
    }

    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        }
        else {
            cout << "Age must be positive." << endl;
        }
    }

    int getAge() const {
        return age;
    }

    void setAverageGrade(double newAverageGrade) {
        if (newAverageGrade >= 0.0 && newAverageGrade <= 4.0) {
            averageGrade = newAverageGrade;
        }
        else {
            cout << "Average grade must be between 0.0 and 4.0." << endl;
        }
    }

    double getAverageGrade() const {
        return averageGrade;
    }

    void printInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Average Grade: " << averageGrade << endl;
    }
};

int main() {
    Student student;
    student.setName("Kris MorningStar");
    student.setAge(20);
    student.setAverageGrade(3.5);

    student.printInfo();

    return 0;
}
