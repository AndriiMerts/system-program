#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double h ;
    double k ;
    double c ;
    cout<<"h= ";
    cin>>h;
     cout<<"k= ";
    cin>>k;
     cout<<"c= ";
    cin>>c;
    double t = h* (pow((sin(h)),2)+c* pow(cos(k),2));
    double z = h*log(pow(h,k)+c)+3;

    cout << " t= "<< t<<" \n z= "<< z << endl;
    return 0;
}
