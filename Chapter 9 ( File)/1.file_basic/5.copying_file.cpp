#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char str[100];

    ifstream fin;
    ofstream fout;
    fin.open("file_1.txt");
    fout.open("file_2.txt");
    while(1)
    {
        fin>>str;
        if(fin.eof())
            break;
        fout<<str<<endl;
    }
    fin.close();
    fout.close();

    return 0;
}
