#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int a,p,i=1;
    bool f=0;
   cout << "\n������� �����: "; cin>>a;
    while (a!=0)
    {
        if ((a<0) and (f==0))
        {
          p=i;
          f=1;
        }

        cout<<"\n������� �����: ";cin>>a;
        i++;
    }
    cout<<"���������� ����� ������� ��������������: "<<p<<'\n';
    system("PAUSE");

    return 0;
}
