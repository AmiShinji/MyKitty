#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char c,l;
    int k=0,p=0;
    cout<<"\n������� �������� ������: "; cin>>l;
    cout<<"\n������� ������ ������������������: "; cin>>c;
    while (c!='.')
    {
       if (c==l)
        k++;
       else if (c!=l)
       {
           p=k;
           k=0;
       }
       if (p<k)
        p=k;
       cout<<"\n������� ������ ������������������: ";cin>>c;
    }
    cout<<"\n������������ ����� ������������������ �������� �����: "<<p<<'\n';

    system("PAUSE");

    return 0;
}
