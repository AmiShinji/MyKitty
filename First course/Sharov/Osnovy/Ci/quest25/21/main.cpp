#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

     int n,i,leng=0,a,mxleng=0;
    cout << "\n������� n ";cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<"\n������� ����� ";cin>>a;
        if (a==0)
            leng++;
        else if (a!=0)
        {
              mxleng=leng;
              leng=0;
        }
        if (mxleng<leng)
            mxleng=leng;
    }
    cout<<"\n�������� "<<mxleng<<'\n';
    system("PAUSE");

    return 0;
}
