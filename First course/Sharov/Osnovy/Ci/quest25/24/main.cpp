#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

      int a,k=1,x,f=0;
    cout << "\n������� x ";cin>>x;
    while (x!=0)
    {
        a=x;
        cout<<"\n������� ����� ";cin>>x;
        if ((a<x) and (f==0))
            k++;
        else f=1;
        a=x;
    }
    cout<<"\n��������� "<<k<<'\n';
    system("PAUSE");

    return 0;
}
