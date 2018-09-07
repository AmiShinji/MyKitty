#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <fstream>
#include <string>
using namespace std;

struct Student
{
    char FIO[50];
    char group[50];
    int mark;
};

float getMiddleMark( float count, int n)
{

  return ( (count/n) * 100 );
}

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int n;
    float count=0;
    cout<<"\n������� ���������� ��������� (�� 4�): ";
    cin>>n;
    Student students [n];
    ifstream input ("f.txt");
    for (int i=0;i<n;i++){
        input>>students[i].FIO;
        cout<<students[i].FIO<<" ";
        input>>students[i].group;
        cout<<students[i].group<<" ";
        input>>students[i].mark;
        cout<<students[i].mark<<" ";
        if ( (students[i].mark==4)||(students[i].mark==5) )
        {
            count+=1;
        }
        }
        input.close();
        cout<<endl;
        if (count>0)
        {
            cout<<"\n������� ���������, ������� ������� "<<getMiddleMark(count,n)<<endl;
        }else cout<<"\n��� ������� �� 4 � 5"<<endl;;


    system("PAUSE");

    return 0;
}
