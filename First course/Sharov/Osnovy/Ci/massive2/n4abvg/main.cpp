#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int n;
    cout<<"\n������� ����������� �������� � ���������� ������:";
    cin>>n;
    int x[n],y[n],A[n][n],B[n][n],C[n][n];
    cout<<"\n��������� ������� A: \n";
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
          cin>>A[i][j];
    cout<<"\n��������� ������� B: \n";
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
          {
              cin>>B[i][j];
              C[i][j]=0;
          }
    cout<<"\nA+B ����� ������� C: \n";
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
              {
                  C[i][j]+=(A[i][j]+B[i][j]);
                  cout<<C[i][j]<<' ';
              }
        cout<<'\n';
    }
    cout<<'\n';
    //��������� �� ������ �������

    cout<<"\n��������� ������-������� x: ";
    for(int i=1;i<=n;i++)
        {
            cin>>x[i];
            y[i]=0;
        }

    cout<<"\n���������� �������-������ y: \n";
    for ( int i=1;i<=n;i++)
    {
        for ( int j=1;j<=n;j++)
            y[i]+=(A[i][j]*x[j]);
        cout<<y[i]<<' ';
    }

    cout<<'\n';
    //������������ ������

     for (int i=1;i<=n;i++)  //������� ������� C
        for (int j=1;j<=n;j++)
            C[i][j]=0;

     cout<<"\nA*B ����� C: \n";
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=n;j++)
          {
                for (int k=1;k<=n;k++)
                   C[i][j]+=(A[i][k]*B[k][j]);
                cout<<C[i][j]<<' ';
          }
        cout<<'\n';
     }

     //������������� B �������
     cout<<'\n';
     int t;
     cout<<"����������������� ������� �: \n";
     for (int i=1;i<=n;i++)
     {
         for (int j=1;j<=i;j++)
         {
             t=B[i][j];
             B[i][j]=B[j][i];
             B[j][i]=t;
             cout<<B[i,j]<<' ';
         }
         cout<<'\n';
     }

    system("PAUSE");
    return 0;
}
