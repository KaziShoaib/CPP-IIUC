#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
using namespace std;

int main()
{
    double x;
    freopen("output.txt","w",stdout);
    cout<<setw(10)<<"x"<<setw(10)<<"sqrt(x)"<<setw(10)<<"x^2"<<endl;




    for(x=2.0;x<=20.0;x++)
    {

        cout<<setprecision(4)<<fixed<<setw(10)<<x<<setw(10)<<sqrt(x)<<setw(10)<<x*x<<endl;

    }
    return 0;
}
