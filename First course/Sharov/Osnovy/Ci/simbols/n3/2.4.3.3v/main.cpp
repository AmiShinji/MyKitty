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
    int n=0,s;
    bool f=false;
    cout << "\n ����� b: "; cin>>b;
    cout << "\n ����� a: ";
    while (a!='.')
    {
        a=getchar();
        if ((k==' ')&&(a==b)&&(f==false))
        {
            f=true;
            s=n;
        }
        k=a;
        n++;
    }
    cout<<s;
//    system("PAUSE");
    cin>>a;
    return 0;
}
