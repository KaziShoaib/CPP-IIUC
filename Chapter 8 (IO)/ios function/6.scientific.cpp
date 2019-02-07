#include<iostream>

using namespace std;

int main()
{
    cout.setf(ios::scientific,ios::floatfield);
    cout.precision(4);
    //cout.setf(ios::uppercase);

    cout<<1234.567890123<<endl;
    cout<<.00000123456789<<endl;

    cout.width(15);
    cout.fill('*');
    cout<<1234.567890123<<endl;

    cout.width(15);
    cout<<.00000123456789<<endl;

    return 0;

}
