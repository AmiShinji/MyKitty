#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
int a,k=0;
float sum=0;
    cout<<"\n������� �����: ";cin>>a;
    while (a!=0)
    {
        k++;
        sum+=a;
        cout<<"\n������� �����: "; cin>>a;
    }
    float arf;
    arf=sum/k;
    cout<<"\������� ��������������: "; cout<<arf;
    system("PAUSE");

    return 0;
}
