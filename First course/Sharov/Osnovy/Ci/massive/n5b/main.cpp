#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int n;
    cout << "\n������� ���������� ��������� �������: ";
    cin>>n;
    int a[n];
    cout<<"\n������� �������� �������: ";
    for ( int i=1;i<=n;i++)
        cin>>a[i];
    p=a[1];
    k=a[2];
    for (int i=3;i<=n;i++)
    {
        a[1]=a[i]

    }
    system("PAUSE");

    return 0;
}
