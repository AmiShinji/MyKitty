#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
int a,b,p=0,i=1;
bool f=0;
cout<<"\n������� ����� b-�������������: "; cin>>b;
cout<<"\n������� �����: "; cin>>a;
while (a!=0)
{
    if ((a<0) and (a>b) and (f==0))
    {
        p=i;
        f=1;
    }
    cout<<"\n������� �����: "; cin>>a;
    i++;
}
cout<<"\n�����: "<<p<<'\n';
    system("PAUSE");

    return 0;
}
