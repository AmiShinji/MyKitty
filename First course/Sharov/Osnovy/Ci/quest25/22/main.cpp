#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

      int a,k=0,x;
    cout << "\n������� x ";cin>>a;
    while (x!=0)
    {
        cout<<"\n������� ����� ";cin>>x;
        if ((x*a)<0)
            k++;
        a=x;
    }
    cout<<"\n��������� "<<k<<'\n';
    system("PAUSE");

    return 0;
}
