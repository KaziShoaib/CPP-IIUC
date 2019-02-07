#include<iostream>

using namespace std;

int main()
{
    cout<<100<<endl;
    cout<<100.00<<endl;

    cout.setf(ios::showpoint);
    cout<<100<<endl;
    cout<<100.00<<endl;

    return 0;
}
