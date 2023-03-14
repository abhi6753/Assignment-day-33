/*10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area. */
#include <iostream>
#include <math.h>
using namespace std;
class shape
{
protected:
    double a, b;

public:
    void set_data(double x, double y=0)
    {
        a = x;
        b = y;
    }
    virtual void display_area() = 0;
};
class square : public shape
{
public:
    void display_area()
    {
        cout << "Area of square  = " << pow(a, 2) << endl;
    }
};
class parallelogram : public shape
{
    public:
    void display_area()
    {
        cout << "Area of parallelogram  = " << a*b << endl;
    }
};
int main()
{
    square s;
    s.set_data(2,2);
    parallelogram p;
    p.set_data(2,3);
    s.display_area();
    p.display_area();
    return 0;
}