#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <cstring>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char c,l;
    int k=0;
    cout<<"\n������� �������� ������: "; cin>>l;
    cout<<"\n������� ������ ������������������: "; cin>>c;
    while (c!='.')
    {
       if (c==l)
        k++;
       cout<<"\n������� ������ ������������������: ";cin>>c;
    }
    cout <<"\n�������� "<<l<<" ����������� "<<k<<" ���(a) "<<'\n';
    system("PAUSE");

    return 0;
}
