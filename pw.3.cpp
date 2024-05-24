#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;
    int enginePower;

public:
    Vehicle(int s, int e) : speed(s), enginePower(e) {}

    void display() {
        cout << "Speed: " << speed << " km/h\n";
        cout << "Engine Power: " << enginePower << " HP\n";
    }
};

class Car : public Vehicle {
public:
    Car(int s, int e) : Vehicle(s, e) {}

    void calculateMaxWeight() {
        int maxWeight = enginePower * 10;
        cout << "Maximum weight that can be carried by this car: " << maxWeight << " kg\n";
    }
};

class Truck : public Vehicle {
public:
    Truck(int s, int e) : Vehicle(s, e) {}

    void calculateMaxWeight() {
        int maxWeight = enginePower * 20;
        cout << "Maximum weight that can be carried by this truck: " << maxWeight << " kg\n";
    }
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(int s, int e) : Vehicle(s, e) {}

    void calculateMaxWeight() {
        int maxWeight = enginePower * 5; 
        cout << "Maximum weight that can be carried by this motorcycle: " << maxWeight << " kg\n";
    }
};

int main() {
    Car car(120, 150);
    Truck truck(80, 300);
    Motorcycle motorcycle(150, 50);

    cout << "Car Information:\n";
    car.display();
    car.calculateMaxWeight();

    cout << "\nTruck Information:\n";
    truck.display();
    truck.calculateMaxWeight();

    cout << "\nMotorcycle Information:\n";
    motorcycle.display();
    motorcycle.calculateMaxWeight();

    return 0;
}
