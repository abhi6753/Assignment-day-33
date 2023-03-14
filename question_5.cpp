/*5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.*/
#include<iostream>
#include<math.h>
using namespace std;
class Photon
{
    protected:
    double wavelength;
};
class calculate_photonEnergy:public Photon
{
    public:
    void set_Wavelength(double e)
    {
        wavelength = e;
    }
    double calculate_PhotonEnergy()
    {
        long double E;
        E = (299792458*(6.6261 * pow(10,-34)))/wavelength;
        return E;
    }
};
int main()
{
    calculate_photonEnergy e;
    double wavelen;
    cout<<"Enter Value of wavelength : ";
    cin>>wavelen;
    e.set_Wavelength(wavelen);
    cout<<"Photon Energy = "<<e.calculate_PhotonEnergy()<<" joules"<<endl;
    return 0;
}