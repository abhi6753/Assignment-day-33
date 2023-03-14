//3. Using the concept of pointers, write a function that swaps the private data values of\
two objects of the same class type.
#include<iostream>
using namespace std;
class Imaginary
{
    int x,y;
    public:
    Imaginary(){}
    Imaginary(int x,int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout<<"Real = "<<x<<endl<<"Imaginary = "<<y<<endl;
    }
    friend void swap(Imaginary*,Imaginary*);
};
void swap(Imaginary* i1,Imaginary* i2)
{
    Imaginary temp;
    temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}
int main()
{
    Imaginary i1(3,4),i2(5,6);
   
    swap(&i1,&i2);
    i1.display();
    i2.display();
    return 0;

}
