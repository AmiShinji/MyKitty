#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    char name[100];
    int a,n;
    cout<<"������� �������� �����: ";
    cin>>name;
    ofstream  output;
    output.open(name);
    cout<<"������� ���������� ��������� ������������������: ";
    cin>>n;
    cout<<'\n';
    cout<<"������� ������������������: ";
    for (int i=0;i<n;i++){
        cin>>a;
        output<<a<<' ';
    }

    output.close();



    system("PAUSE");

    return 0;
}
