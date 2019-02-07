#include<iostream>

using namespace std;

int main()
{
    cout.setf(ios::showpos);
    cout<<9999<<endl;

    cout.width(10);
    cout<<9999<<endl;

    cout.width(10);
    cout.setf(ios::internal,ios::adjustfield);
    cout<<9999<<endl;

    cout.fill('%');
    cout.width(10);
    cout<<9999<<endl;

    return 0;
}
