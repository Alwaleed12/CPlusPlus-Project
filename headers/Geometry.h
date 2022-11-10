// include pre-processor directive
#include <iostream>

// use C++ standard library namespace
using namespace std;

// declare the class
class Geometry
{
    // class members (fields, constructors, methods)
    // may have the following access modifiers: private,
    // public, protected
    // this class is going to be an abstract class
    // (like a Java interface) b/c its only method is 
    // going to be virtual; it will have a declaration only
    // and not a body
    // must use the keyword virtual when declaring virtual
    // methods and must initialzie virtual methods to zero
    public:
        virtual void compute() = 0;
};