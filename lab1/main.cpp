#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a=0.98 ,b=0.25, x=2.75;
    double y=log10(pow(b,2)+sqrt(2*x))* atan(x+a)* exp(7.2)+ asin(b)- pow(x,1/9);

    cout<<"a= "<<a<<" b= "<<b<<" x= "<<x<<endl;
    cout << " y= "<< y << endl;
    return 0;
}
