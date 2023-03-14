/*2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/
#include<iostream>
using namespace std;
#define PI 3.14
class Shape
{
   protected:
    double x,y;
    public:
    void setData(int l,int b=0)
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
class Circle:public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of circle = "<<PI*x*x<<endl;
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
    Circle c1;
    c1.setData(3);
    c1.display_area();
    return 0;
}