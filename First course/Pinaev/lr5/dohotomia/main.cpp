#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <math.h>
using namespace std;

double f (double x)
{
    return sin(x)-(1/x);
}
int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    double a,b,c,eps;
    cout<<"\n������� �����������: ";
    cin>>eps;
    cout<<"\n������� ����� ������� ��������� - a: ";
    cin>>a;
    cout<<"\n������� ������ ������� ��������� - b: ";
    cin>>b;
    while ((b-a)>eps)
    {
        c=(a+b)/2;
        if ( (f(b)*f(c))<0)
            a=c;
            else
                b=c;
    }
    cout<<"������ x="<<(a+b)/2<<"\n";

    system("PAUSE");

    return 0;
}
