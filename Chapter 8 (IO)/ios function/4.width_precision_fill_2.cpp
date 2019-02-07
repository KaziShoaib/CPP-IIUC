#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x;

    cout.width(10);
    cout<<"x";
    cout.width(10);
    cout<<"sqrt(x)";
    cout.width(10);
    cout<<"x^2"<<endl;

    cout.precision(4);
    for(x=2.0;x<=20.0;x++)
    {
        cout.width(10);
        cout<<x;

        cout.width(10);
        cout<<sqrt(x);

        cout.width(10);
        cout<<x*x;
        cout<<endl;
    }
    return 0;
}
