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
    int a[n][n];
    cout<<"\n��������� �������: \n";
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
          cin>>a[i][j];
    cout<<"\n�o�������� �������\n";
    for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n;j++)
              cout<<a[j][i]<<' ';
            cout<<'\n';
        }

    system("PAUSE");

    return 0;
}
