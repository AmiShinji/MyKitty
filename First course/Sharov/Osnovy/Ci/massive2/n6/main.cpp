#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int n,m;
    cout<<"\n������� ����������� �������\n";
    cout<<"\nn: ";
    cin>>n;
    cout<<"\nm: ";
    cin>>m;
    int A[n][m];
    cout<<"\n������� �������: \n";
    for ( int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>A[i][j];
    int min;
    for ( int i=0;i<n;i++)

    {
        min=A[i][i];
        for ( int j=0;j<m;j++)
            if ( A[i][j]<min)
                   min=A[i][j];
        cout<<min<<' ';
    }
    cout<<'\n';


    system("PAUSE");

    return 0;
}
