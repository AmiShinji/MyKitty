#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <cmath>

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int i;
    double x,qrtX,e,sh,sum,standartf;
    long double raznost;
    cout<<"\n������� ��������: ";cin>>x;
    cout<<"\n������� �����������: ";cin>>e;
    qrtX=x*x;
    sh=x;//��� i=0 �������� ������� ����� ���������
    sum=0;
    i=2;

   // bool f=(abs(sh))>e;
    while((abs(sh))>e)
    {
        sum+=sh;
        sh=sh*(qrtX /((2*i-2)*(2*i-1)));
        i++;
    }
    cout<<"\n����������� �������� ����� ���: "<<sum<<'\n';
    cout<<"\n���������� ���������: "; cout<<i<<'\n';
    cout<<"\������ �������� ����� ����������� �������\n";
    standartf=sinh(x);
    cout<<"\n����������� �������� ����� ����������� �������: "<<standartf<<'\n';
    cout<<"\n������ �������� ����� ������������\n";
    raznost=standartf-sum;
    cout<<"\n���������� ��������: ";cout<<raznost<<'\n';

    system("PAUSE");

    return 0;
}
