#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

int a,b,e,k=0;
cout<<"\n������� ����� b: ";cin>>b;
cout<<"\n������� ����� e: ";cin>>e;
cout<<"\n������� �������� ������������������: ";cin>>a;
while(a!=0)
{
    if (abs(b-a)==e)
        k++;
    cin>>a;
}
cout<<"����������: ";cout<<k;
    system("PAUSE");

    return 0;
}
