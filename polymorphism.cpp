#include <iostream>

using namespace std;

// Base Class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
    
    // Virtual destructor for safety
    virtual ~Shape() {}
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived Class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Create base class pointers pointing to derived objects
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Call the virtual function (Runtime Polymorphism)
    shape1->draw(); // Outputs: Drawing a Circle.
    shape2->draw(); // Outputs: Drawing a Rectangle.

    // Clean up memory
    delete shape1;
    delete shape2;

    return 0;
}
