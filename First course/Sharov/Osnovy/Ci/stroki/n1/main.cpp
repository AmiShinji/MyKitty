#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    char *str1,*str2;
    cout<<"\n������� ������ : ";
    gets(str1);
    for (int i=0;i<strlen(str1);i++)
        if ( str1[i]=='�')
            strcpy(str2,"��");
        //else strcpy(str2,str1[i]);
    cout<<str2;


    system("PAUSE");

    return 0;
}
