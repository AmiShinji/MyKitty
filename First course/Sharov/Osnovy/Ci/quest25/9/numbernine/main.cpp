#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
int a,mi,ma,r;
cout<<"������� �������� ������������������: ";cin>>a;
mi=a;
ma=a;
while(a!=0)
{
    if (a>ma)
        ma=a;
    if(a<mi)
        mi=a;
    cin>>a;
}
r=ma-mi;
cout<<"��������: ";cout<<r;
    system("PAUSE");

    return 0;
}
