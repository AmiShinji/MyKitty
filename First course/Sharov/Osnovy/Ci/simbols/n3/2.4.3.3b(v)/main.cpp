#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
#include <cstdio>
using namespace std;

int main()
{
//    setRusLocale(); //��������� ���������
//    textcolor(WHITE); //���� ������ - �����
    char a,b,k;
    int n=0;
    cout << "\n ����� b: "; cin>>b;
    cout << "\n ����� a: ";
    while (a!='.')
    {
        a=getchar();
        if ((k==' ')&&(a==b)) n++;
        k=a;
    }
    cout<<n;
//    system("PAUSE");
    cin>>a;
    return 0;
}
