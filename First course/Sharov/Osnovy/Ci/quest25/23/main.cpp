#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

     int n,i,k=1,x,a;
    cout << "\n������� n ";cin>>n;
    cout << "\n������� x ";cin>>x;
    a=x;
    for (i=2;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>x;
        if (x>a)
             k++;
        a=x;

    }
    if (k==n)
    cout<<"\nDA "<<'\n';
    else cout<<"\nNET "<<'\n';
    system("PAUSE");

    return 0;
}
