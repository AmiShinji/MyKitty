#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

      int a,k=1,x,mk=0,n,i;
    cout << "\n������� n ";cin>>n;
    cout << "\n������� x ";cin>>x;
    a=x;
    for (i=2;i<=n;i++)
    {
        a=x;
        cout<<"\n������� ����� ";cin>>x;
        if (a<x)
            k++;
        else if (a>=x)
        {
            mk=k;
            k=1;
        }
        if (mk<k)
            mk=k;
        a=x;
    }
    cout<<"\n��������� "<<mk<<'\n';
    system("PAUSE");

    return 0;
}
