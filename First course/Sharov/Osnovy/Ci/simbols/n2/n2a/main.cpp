#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char a,b;
    bool flag=false;
    cout<<"\n������� ������������������ ��������: ";
    cin>>b;//�������� ������ ������
    cin>>a;
    while (a!='.')
    {
        if ( (b=='�') and (a=='�') )
            flag=true;
        b=a;
        cin>>a;
    }
    if (flag==true)
        cout<<"\n������\n";
        else cout<<"\n�� ������\n";

    system("PAUSE");

    return 0;
}
