#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

   int n,i,k=1,a,ma;
    cout << "\n������� n ";cin>>n;
    cout << "\n������� ";cin>>a;
    ma=a;
    for (i=2;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>a;
        if (a>ma)
        {
            ma=a;
            k=1;
        }
        if(a==ma)
            k++;

    }
    cout<<"\n��������� "<<k<<'\n';
    system("PAUSE");

    return 0;
}
