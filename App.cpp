// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
// #include "./headers/Circle.h"
#include "./headers/Cylinder.h"


// In C++, a namespace is a collection of related identifiers
// (functions, classes, objects, variables).

// The C++ standard library identifiers are defined in a namespace
// called std.

// A way to bring a specific identifier of the std namespace into
// a C++ application is with the help of the using declaration.
// using std::cout;

// A way to bring all the identifiers of the std namespace into a
// C++ application as if they were declared globally is with the help of the
// using namespace statement
using namespace std;

int main() {
    // In order to use a C++ standard library identifier, like cout,
    // we need to specify that it belongs to the std namespace. One
    // way to do this is by using the scope resolution operator ::
    // std::cout << "Hello World!";
    //cout << "Hello World!";
    // output();
    // input();
    // decisions1();
    // loops1();
    // congratulate1("Alwaleed", "C++", "Bjarne Stoustrup");
    // accessStructMembers();

    // declare a Person struct
    // struct Person p;

    // assign values to its members
    // p.heightInMeters = 1.52;
    // p.weightInKilos = 56;

    // call the bodyMassIndex function passing the struct as an argument
    // output the return from bodyMassIndex function
    // cout  << bodyMassIndex(p) << endl;

    // declare and intiialize a Circle object using the no-arg constrctor
    Circle circle1;

    // declare local variables that we will use when calling circle1's 
    // getters
    int radius;
    double area;

    cout << "Circle 1: ";
    circle1.printCircle();

    circle1.setRadius(5);
    cout << "Circle 1 : ";
    circle1.printCircle();

    circle1.compute();
    cout << "Circle 1 : ";
    circle1.printCircle();

    // when calling getter method, must provide local varibale
    // as argument. the value in the field will be placed by the
    // getter method into the address of the local varibable
    circle1.getRadius(radius);
    // this allow us to output the value to stdout s
    cout << "Radius 1 : " << radius << endl;

    circle1.getArea(area);
    cout << "Area 1 : " << area << endl;

    // declare and initialize Circle object using one-arg constructor
    Circle circle2(3);

    cout << "Circle 2 : ";
    circle2.printCircle();

    circle2.compute();
    cout << "Circle 2 : ";
    circle2.printCircle();

    cout << "Circle 1 equals Circle 2? " << circle1.equalCircle(circle2) << endl;
    cout << "Circle 1 equals circle 2 ? " <<
    (circle1.equalCircle(circle2) ? "true" : "false") << endl;

    // delcare and initialize a Cylinder using no-arg constructor
    Cylinder cylinder1;

    // delcare local variables that will be used when calling the cylinder's
    // getter methods
    int height;
    double volume;

    cout << "Cylinder 1 : ";
    cylinder1.printCylinder();

    cylinder1.Circle::setRadius(5);
    cylinder1.Circle::compute();
    cout << "Cylinder 1 : ";
    cylinder1.printCylinder();

    cylinder1.setHeight(7);
    cylinder1.compute();
    cout << "Cylinder 1 : ";
    cylinder1.printCylinder();

    cylinder1.getHeight(height);
    cout << "Height 1 : " << height << endl;
    cylinder1.getVolume(volume);
    cout << "Volume 1 : " << volume << endl;

    // declare and initialize Cylinder using the two-arg constructor
    // providing 4 for the radius and 8 for the height
    Cylinder cylinder2(4,8);

    // print the Cylinder to stdout
    cout << "Cylinder 2 : ";
    cylinder2.printCylinder();

    // compute the area
    // print the Cylinder to stdout
    cylinder2.getArea(area);
    cylinder2.compute();
    cout << "Cylinder 2 : ";

    // compute the volume
    // print the Cylinder to stdout
    cylinder2.getVolume(volume);
    cylinder2.compute();
    cout << "Cylinder 2 : ";

    // display if the first and second cylinders are equal
    cout << "Cylinder 1 equals Cylinder 2 ? " <<
    (cylinder1.equalCircle(cylinder2) ? "true" : "false") << endl;
}