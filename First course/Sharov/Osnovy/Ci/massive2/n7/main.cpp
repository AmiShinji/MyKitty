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
    int A[n][m],k=0;
    cout<<"\n������� �������: \n";
    for ( int i=0;i<n;i++)
        for (int j=0;j<m;j++)
                cin>>A[i][j];


    for ( int i=0;i<m;i++){
        for (int j=0;j<n;j++)
                if ( A[j][i]<0)
                    k++;
        cout<<k<<' ';
        k=0;
    }



    system("PAUSE");

    return 0;
}
