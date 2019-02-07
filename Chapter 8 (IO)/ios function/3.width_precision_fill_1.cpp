#include<iostream>

using namespace std;

int main()
{
    cout.width(10);
    cout<<"hello"<<endl;

    cout.fill('%');
    cout.width(10);
    cout<<"hello"<<endl;

    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout<<"hello"<<endl;

    cout.precision(10);
    cout.width(10);
    cout<<123.23456789<<endl;

    cout.width(10);
    cout.precision(6);
    cout<<123.234567<<endl;

    return 0;
}
