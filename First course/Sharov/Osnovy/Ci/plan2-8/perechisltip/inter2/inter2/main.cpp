#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    int n;
    cout<<"\n������� ����� ��� ������: ";cin>>n;
    switch(n)
    {
        case 1: cout<<"����������� ";break;
        case 2: cout<<"������� ";break;
        case 3: cout<<"����� ";break;
        case 4: cout<<"������� ";break;
        case 5: cout<<"������� ";break;
        case 6: cout<<"������� ";break;
        case 7: cout<<"����������� ";break;

    }
    system("PAUSE");

    return 0;
}
