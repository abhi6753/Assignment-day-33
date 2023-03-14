/*4. Create a base class called shape. Use this class to store 2 double type values that
could be used to compute the area of figures. Derive 2 specific classes called triangle
and rectangle from the base shape. Add to the base class a member function
get_data() to initialise base class data members and another member function
display_area() to compute and display the area of figures. Make display_area() as a
virtual function and redefine this function in derived classes to suit their requirements.
Using these 3 classes, design a program that will accept the dimensions of the
shapes interactively and display area.
*/
#include<iostream>
using namespace std;
class Shape
{
   protected:
    double x,y;
    public:
    void setData(int l,int b)
    {
        x = l;
        y = b;

    }
    virtual void display_area()=0;
};
class Triangle:public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Triangle = "<<(x*y)/2.0<<endl;
    }

};
class Rectangle:public Shape
{
     public:
    void display_area()
    {
        cout<<"Area of Rectangle = "<<x*y<<endl;
    }
};
int main()
{
    Triangle t1;
    t1.setData(20,10);
    t1.display_area();
    Rectangle r1;
    r1.setData(5,2);
    r1.display_area();
    return 0;
}