#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    ifstream input;
    input.open("kek.txt");
    if (!input)
    {
        cout<<"\n������";
    }
    string s;
    input>>s;
    while (!input.eof())
    {

        if (s.length() > 60)
        {
            cout<<s<<'\n';
        }

        if(!input.eof())
        {
            input>>s;
        }

    }
    input.close();
        system("PAUSE");

    return 0;
}
