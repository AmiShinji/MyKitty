#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int n,i,x,r;
    cout << "\n������� n ";cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>x;
        if (x<0)
            r=x;

    }
    cout<<"\n��������� "<<r<<'\n';
    system("PAUSE");

    return 0;
}
