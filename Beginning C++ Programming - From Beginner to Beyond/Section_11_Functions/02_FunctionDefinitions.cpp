// Area of Circle and Volume of a Cylinder

/*
---------Section 11 -  Defining functions ----------------
    name:
        - the name of a function
        - same rules as for variables
        - should be meaningful
        - usually a verd or verb phrase

    parameter list:
        - the variables passed into the function
        - their type must be specified

    return type:
        - the type of the data that is returned from the function
    
    body:
        - the statements that are executed when the function is called
        - in curly braces{}

Function with no return type and no parameters
    void say_hello();

Calling functions 
    - function can call another functions
    - Compiler must know the func details BEFORE itis called!
*/

#include <iostream>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
//    return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    return 0;
}

