#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    typedef DayOfWeek=[Sunday,Mondey,Tuesday,Wednesday,Thursday,Friday,Saturday];
    int i,n,k;
    char w;
    cout<<"\n������� ����������� ���� ������: ";cin>>w;
    switch(w)
    {
        Sunday: i=0;break;
        Mondey: i=1;break;
        Tuesday: i=2;break;
        Wedndesday: i=3;break;
        Thursday: i=4;break;
        Friday: i=5;break;
        Saturday: i=6; break;
    }
    cout<<"\n������� ����� N: "; cin>>n;

    if ((i+n)==7)
        k=0;
    else k=(i+n)%7;
    cout<<"\n����� n ���� �����: ";
    switch(k)
    {
        case 0: cout<<DayOfWeek[0];break;
        case 1: cout<<DayOfWeek[1];break;
        case 2: cout<<DayOfWeek[2];break;
        case 3: cout<<DayOfWeek[3];break;
        case 4: cout<<DayOfWeek[4];break;
        case 5: cout<<DayOfWeek[5];break;
        case 6: cout<<DayOfWeek[6];break;
    }
    system("PAUSE");

    return 0;
}
