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
    input.open("qq.txt");
    if (!input)
    {
        cout<<"\n������";
    }
    string s,MAXs;
    input>>s;
    MAXs=s;
    int count=1,numMax;
    bool flag=false;
    while (!input.eof())
    {
        if(!input.eof())
        {
            input>>s;
        }
        count+=1;
        if (s.length() > MAXs.length())
        {
            MAXs=s;
            numMax=count;
        }
    }
    input.close();
    cout<<"\n���������� ����� ������������ ������: "<<numMax<<endl;
    system("PAUSE");

    return 0;
}
