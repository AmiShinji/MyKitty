#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <cstdio>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char a;
    int n,s=0;
    cout << "\n ����� n: "; cin>>n;
    for (int i=0; i<n; i++)
    {
        cout << "\n ����� a: "; cin>>a;
        if(a=='(')
        {
            s++;
        }
        if(a==')')
        {
            s--;
        }
    }
    if(s==0)
    {
        cout<<"\n ���������� ������ ���������";
    }
    if(s!=0)
    {
        cout<<"\n ���������� ������ �� ��������� \n";
    }
    system("PAUSE");
    return 0;
}
