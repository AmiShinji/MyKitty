#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int n,a,b,k=0;
    float sum=0;
    cout<<"\n������� ���������� ����� � ������������������";cin>>n;
    cout<<"\n������� ����� b : ";cin>>b;
    for(int i=0;i<n;i++)
    {
        cout<<"\n������� ������� ������������������: ";cin>>a;
        if(a>b)
            {
                sum+=a;
                k++;
            }

    }
    float arf;
    arf=sum/k;
    cout<<"\n������� �������������� �� �����, ������������� ����� b: ";cout<<arf;

    system("PAUSE");

    return 0;
}
