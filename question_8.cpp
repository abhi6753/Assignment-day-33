/*8. Create a base class called proof. Use this class to store two int type values that could
be used to prove that triangle is a right angled triangle. Create a class compute
which will determine whether a triangle is a right angled triangle.
Using these classes, design a program that will accept dimensions of a triangle, and
display the result.
(Summary: Prove that triangle is a right angled triangle using pythagoras theorem). */
#include<iostream>
#include<math.h>
using namespace std;
class proof
{
    protected:
    int a,b,c;
    public:
    proof(int b,int p,int h):a(b),b(p),c(h){}

};
class compute:public proof
{
    public:
    compute(int b,int p,int h):proof(b,p,h){}
    void display()
    {
        if((pow(a,2)+pow(b,2))==pow(c,2))
        {
            cout<<"Right angle triangle"<<endl;
        }
        else
        {
            cout<<"Not right angle triangle"<<endl;
        }
    }
};
int main()
{
    int b,p,h;
    cout<<"Enter the base of triangle : ";
    cin>>b;
    cout<<"Enter the perpendicular of triangle : ";
    cin>>p;
    cout<<"Enter the hypotaneoud of triangle : ";
    cin>>h;
    compute c(b,p,h);
    c.display();
    return 0;
}