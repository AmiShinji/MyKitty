#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int n;
    cout<<"\n������� ����������� �������: ";
    cin>>n;
    float A[n][n],max,min;
    cout<<"\n������� �������: \n";
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
                cin>>A[i][j];
        cout<<'\n';
    }
    max=A[1][1];
    min=A[1][1];
    int kmin,kmax;
    for (int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            {
                if (A[i][j]>max)
                {
                    max=A[i][j];
                    kmax=i;
                }
                if ( A[i][j]<min )
                {
                    min=A[i][j];
                    kmin=j;
                }
            }
  // cout<<min<<' '<<max;
    //cout<<'\n'<<kmax<<' '<<kmin; ��������� ������������ ������������ ������ � ������
    float y[n];
    for ( int i=1;i<=n;i++)
        y[i]=0;              //������������� ������
    cout<<"\n��������� ������������ : ";
    for (int i=1;i<=n;i++)
    {
        y[i]+=( A[kmax][i]*A[i][kmin]);
        cout<<y[i]<<' ';
    }
    cout<<'\n';



    system("PAUSE");

    return 0;
}
