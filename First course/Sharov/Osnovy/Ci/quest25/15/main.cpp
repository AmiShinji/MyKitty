#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����


    int n,i,x,p,b;
    cout << "\n������� b ";cin>>b;
    cout << "\n������� n ";cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>x;
        if (x>b)
            p=i;

    }
    cout<<"\n��������� "<<p<<'\n';
    system("PAUSE");

    return 0;
}
