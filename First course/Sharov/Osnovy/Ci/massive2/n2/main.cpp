#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int n;
    cout<<"\n������� ����������� ���������� ������� � �������-�������: ";
    cin>>n;
    int a[n][n],b[n],c[n];
    cout<<"\n��������� �������: \n";
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
          cin>>a[i][j];
    cout<<"\n��������� ������-�������: ";
    for(int i=1;i<=n;i++)
        {
            cin>>b[i];
            c[i]=0;
        }
    cout<<"\n���������� �������-������: \n";
    for ( int i=1;i<=n;i++)
    {
        for ( int j=1;j<=n;j++)
            c[i]+=(a[i][j]*b[j]);
        cout<<c[i]<<' ';
    }

    system("PAUSE");

    return 0;
}
