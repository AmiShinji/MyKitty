#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int a,p=1;
    cout<<"\n������� �����: ";cin>>a;
    while (a!=0)
    {
        p*=a;
        cout<<"\n������� �����: "; cin>>a;
    }
    cout<<"������������ ��������� ������������������ = "<<p<<' ';

    system("PAUSE");

    return 0;
}
