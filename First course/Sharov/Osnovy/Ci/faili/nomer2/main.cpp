#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <fstream>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����


    char name[100];
    int a,n,c;
    cout<<"������� �������� �����: ";
    cin>>name;
    ifstream  input;
    input.open(name);
    if (!input)
       {
        cout<<"\n������ �������� �����\n";exit(1);
       }
    int sum=0;
    a=input.peek();
    while (!input.eof())
    {
        input>>c;
        sum+=c;
        if (!input.eof())
            cout<<c<<"+";
            else cout<<c<<"=";
    }
    input.close();
    cout<<sum;

    system("PAUSE");

    return 0;
}
