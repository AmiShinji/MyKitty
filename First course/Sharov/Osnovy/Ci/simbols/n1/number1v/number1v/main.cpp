#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char s,n;
    int k=1,ma=0;
    cout<<"\n������� ������: ";cin>>n;
    cout<<"\n������� ������: "; cin>>s;
    while (s!='.')
    {
        if(n==s)
            k++;
        else if (k>ma)
        {
            ma=k;
            k=1;
        }
        n=s;
        cout<<"\n������� ������: "; cin>>s;
    }
    cout<<"\n����� ����: "<<ma<<'\n';
    system("PAUSE");

    return 0;
}
