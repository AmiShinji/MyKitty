#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <fstream>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����


    ifstream input;
    input.open("f.txt");
    if (!input)
    {
       cout<<"\n������!";
    }
    ofstream output;
    output.open("f1.txt");
    int a;
    while(!input.eof())
    {
        input>>a;
        if (a>0)
        {
            if(!input.eof() )
            {
                output<<a<<' ';
            }
            else output<<a;

        }
    }
    output.close();
    input.close();
    input.open("f1.txt");
    if (!input)
    {
        cout<<"\n������";
    }
    while(!input.eof())
    {
        input>>a;
        cout<<a<<' ';

    }
    input.close();
    system("PAUSE");

    return 0;
}
