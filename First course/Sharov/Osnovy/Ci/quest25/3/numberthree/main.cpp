#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int n,a,sum;
    sum=0;
    cout<<"\n������� ���������� ��������� ������������������: ";cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a;
        if(a<0)
            sum+=a;
    }
    cout<<"\n���������� �����: "<<sum;
    system("PAUSE");

    return 0;
}
