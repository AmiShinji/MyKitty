#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <cstring>

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char a,b;
    int c=0;
    cout<<"\n������� ������������������ ��������: ";
    cin>>b;
    cin>>a;
    while (a!='.')
    {
        if  ( ( b=='�') and (a=='�') )
            c++;
        b=a;
        cin>>a;
    }
    cout<<c<<" ��� ������ ������� ����� '��'. "<<'\n';
    system("PAUSE");

    return 0;
}
