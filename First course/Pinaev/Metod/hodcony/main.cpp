#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <iomanip>
using namespace std;

const int n=8;
int d[n][n],kol;
void kon(int i,int x,int y, bool&q)
{
    int u,v,k;
    bool q1;
    int dx[8]={2,1,-1,-2,-2,-1,1,2},
        dy[8]={1,2,2,1,-1,-2,-2,-1};
    k=-1;
    do
    {
        k++;
        q1=false;
        u=x+dx[k];
        v=y+dy[k];
        if ((d[u][v]==0)&&(u>=0)&&(u<n)&&(v>=0)&&(v<n))
        {
            d[u][v]=i;
            if (i==n*n)
                q1=true;
            else
            {
                kol++;
                kon(i+1,u,v,q1);
                if (!q1)
                    d[u][v]=0;
            }
        }
    }while (!q1 &&(k<7));
    q=q1;
}


int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int x0,y0;
    bool q;
    for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
            d[i][j]=0;
    cout<<"������� x0 ";cin>>x0;
    cout<<"������� y0 ";cin>>y0;
    d[x0][y0]=1;
    kon(2,x0,y0,q);
    if(q)
        for(int i=0;i<n;i++)
    {
        cout<<'\n';
        for(int j=0;j<n;j++)
            if (d[i][j]<=9)
                cout<<setw(4)<<d[i][j]<<' ';
            else cout<<setw(4)<<d[i][j]<<" ";
    }
    else cout<<"��� ���� ���������� ";
    cout<<'\n';
    //cout<<"���������� ����� �����: "<<kol<<'\n';
   system("PAUSE");

return 0;
}
