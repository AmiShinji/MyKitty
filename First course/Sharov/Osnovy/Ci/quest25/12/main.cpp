#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int n,i,x,max;
    cout << "\n������� n ";cin>>n;
    cout << "\n������� x ";cin>>x;
    max=x;
    for (i=2;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>x;
        if (x<0)
          if (x<max)
            max=x;

    }
    cout<<"\n��������� "<<max<<'\n';
    system("PAUSE");

    return 0;
}
