#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int a,p=0,mi,i=1;
    bool f=0;
    cout << "\n������� ����� ";cin>>a;
    mi=a;
    while (a!=0)
    {
        if ((a<mi) and (f==0))
        {
             mi=a;
             f=1;
             p=i;
        }
        i++;

        cout<<"\n������� �����: "; cin>>a;
    }
    cout<<"\n���������� ����� ������������: "<<p<<'\n';
    system("PAUSE");

    return 0;
}
