#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

   int n,i,a,p=0,mi;
   bool f=0;
    cout << "\n������� n ";cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>a;
        if ((a>0) and (f==0))
        {
            p=i;
            f=1;
        }

    }
    cout<<"\n���������� �����: "<<p<<'\n';
    system("PAUSE");

    return 0;
}
