#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int a,b,sum;
    sum=0;
    cout<<"\n������� �������� �������� b: "; cin>>b;
    cout<<"\n������� ������������������.";
    cout<<"\n������� ������� ������������������: "; cin>>a;
    while (a!=0)
    {
        if (a>b)
            sum+=a;
        cout<<"\n������� ������� ������������������: "; cin>>a;

    }
    cout<<"\n���������� �����: "<<sum;
    system("PAUSE");

    return 0;
}
