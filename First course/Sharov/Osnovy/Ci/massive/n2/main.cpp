#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    const int n=10;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"\n��� ������������� �����: ";
    for(int i=0;i<n;i++)
    {
        if (a[i]>0)
            cout<<a[i]<<' ';
    }
    cout<<'\n';
    cout<<"\n��� ������������� �����: ";
    for(int i=0;i<n;i++)
    {
        if (a[i]<0)
            cout<<a[i]<<' ';
    }
    cout<<'\n';
    system("PAUSE");

    return 0;
}
