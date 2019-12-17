#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double s;
    cout<<"input distance: ";
    cin>>s;
    if (s<=20){
        cout<<"zone nubmer 1";
    }
    else if (s>=21 && s<=40) {
        cout<<"zone nubmer 2";
    }
    else if (s>=41 && s<=60) {
        cout<<"zone nubmer 3";
    } else if (s>=61 && s<=80) {
        cout<<"zone nubmer 4";
    } else if (s>=81 && s<=100) {
        cout<<"zone nubmer 5";
    }
    else
        cout<<"incorrect distance";


    double D= 1.152;
    double x,y;
    cout << "\n___________________"<<endl;
   cout <<"x= ";
   cin>>x;
   cout <<"y= ";
   cin>>y;
    if(x<=y){
    double A=D *tan(x)+x*y;
     cout << "A= " << A<< endl;
    }
    else
    {
    double A=exp(x)+log(x*y);
    cout << "A= " << A<< endl;

    return 0;
}
}
