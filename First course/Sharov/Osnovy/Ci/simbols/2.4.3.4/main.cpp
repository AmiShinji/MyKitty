#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <cstdio>
using namespace std;

int main()
{
   setRusLocale(); //��������� ���������
   textcolor(WHITE); //���� ������ - �����
    char a;
    int n,w,d1,d2,m1,m2,y1,y2,y3,y4;
    cout << "\n ����� d1: "; cin>>d1; cout << "\n ����� d2: "; cin>>d2;
    cout << "\n ����� m1: "; cin>>m1; cout << "\n ����� m2: "; cin>>m2;
    cout << "\n ����� y1: "; cin>>y1; cout << "\n ����� y2: "; cin>>y2;
    cout << "\n ����� y3: "; cin>>y3; cout << "\n ����� y4: "; cin>>y4;
    cout << "\n ����� ���� ������: "; cin>>w; cout << "\n ����� ����� �������: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        d2++;
        w++;
        if(d2==10)
        {
            d2=0;
            d1++;
        }
        if((d1==3)&&(d2==1))
        {
            d1=0;
            d2=1;
            m2++;
        }
        if(m2==10)
        {
            m2=0;
            m1++;
        }
        if((m1==1)&&(m2==2))
        {
            m2=1;
            m1=0;
            y4++;
        }
        if(y4==10)
        {
            y4=0;
            y3++;
        }
        if(y3==10)
        {
            y3=0;
            y2++;
        }
        if(y2==10)
        {
            y2=0;
            y1++;
        }
        if(w==8) w=1;
    }

    if(w==1)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�����������";
    }
    if(w==2)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�������";
    }
    if(w==3)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�����";
    }
    if(w==4)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�������";
    }
    if(w==5)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�������";
    }
    if(w==6)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�������";
    }
    if(w==7)
    {
        cout<<d1<<d2<<"."<<m1<<m2<<"."<<y1<<y2<<y3<<y4<<" "<<"�����������";
    }

    system("PAUSE");
    return 0;
}
