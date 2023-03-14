/*7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix.*/
#include<iostream>
using namespace std;
class Matrix
{
    protected:
    int matrix[4];
    public:
    Matrix(int a,int b,int c,int d)
    {
        matrix[0]=a;
        matrix[1]=b;
        matrix[2]=c;
        matrix[3]=d;
    }
};
class calculate_determinant:public Matrix
{
    public:
    calculate_determinant(int a,int b,int c,int d):Matrix(a,b,c,d){}
    int calculate_determinat()
    {
        int x;
        x = (matrix[0]*matrix[3])-(matrix[1]*matrix[2]);
        return x;
    }

};
int main()
{
   calculate_determinant c1(3,-1,4,3);
   cout<<"| A | = "<<c1.calculate_determinat()<<endl;
   return 0;
}