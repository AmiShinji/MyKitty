#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

   int x,i=1,p;
   cout << "\n������� ����� x ";cin>>x;
    while (x!=0)
    {
        if (x<0)
             p=i;
        i++;

        cout<<"\n������� ��� ";cin>>x;
    }
    cout<<"\n��������� "<<p<<'\n';
    system("PAUSE");

    return 0;
}
