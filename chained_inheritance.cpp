#include <iostream>
#include <string>

using namespace std;

// Level 1: Base Class
class Device {
protected:
    string brand;

public:
    Device(string b) : brand(b) {}
    
    void turnOn() {
        cout << brand << " is now powered on." << endl;
    }
};

// Level 2: Intermediate Class
class Computer : public Device {
protected:
    int ram;

public:
    Computer(string b, int r) : Device(b), ram(r) {}
    
    void showSpecs() {
        cout << "Computer Brand: " << brand << ", RAM: " << ram << "GB" << endl;
    }
};

// Level 3: Derived Class
class Laptop : public Computer {
private:
    double batteryLife;

public:
    Laptop(string b, int r, double bat) : Computer(b, r), batteryLife(bat) {}
    
    void showBattery() {
        cout << "Battery remaining: " << batteryLife << " hours." << endl;
    }
};

int main() {
    // Create a Laptop object
    Laptop myLaptop("Dell", 16, 8.5);

    // Demonstrate calling functions from all three levels
    myLaptop.turnOn();       // Inherited from Device
    myLaptop.showSpecs();     // Inherited from Computer
    myLaptop.showBattery();   // Defined locally in Laptop

    return 0;
}
