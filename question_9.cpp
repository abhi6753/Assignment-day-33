/*9. Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function set_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.*/
#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;
class Volume
{
protected:
    double a, volume;

public:
    void set_data(double x, double y = 0)
    {
        a = x;
    }
    virtual void display_volume() = 0;
};
class cube : public Volume
{
public:
    void display_volume()
    {
        volume = pow(a, 3);
        cout << "Volume of cube = " << volume << endl;
    }
};
class sphere : public Volume
{
    public:
    void display_volume()
    {
        volume = (4 * PI * pow(a, 3)) / 3;
        cout << "Volume of sphere = " << volume << endl;
    }
};
int main()
{
    cube c;
    c.set_data(3);
    sphere s;
    s.set_data(2);
    c.display_volume();
    s.display_volume();
    return 0;
}