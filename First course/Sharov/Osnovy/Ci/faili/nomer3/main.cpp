#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <fstream>
using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����
    ofstream output;//����� ��� ��� ������ �
    output.open("kc.txt",ios::app);
    int k,a;
    cout<<"\n������� k: ";
    cin>>k;
    for (int i=0;i<k;i++){
        cin>>a;
        output<<a<<' ';
    }
    output.close();
    ifstream input;
    input.open("kc.txt");
    if (!input){
        cout<<"\n������\n";
    }
    while (!input.eof()){
        input>>a;
        if (!input.eof())
            cout<<a<<' ';
    }
    input.close();//����� ��� ��� ������ �
    cout<<'\n';
    input.open("kc.txt");
    int max,min;
    input>>a;
    max=a;
    min=a;
    while (!input.eof()){
        input>>a;
        if (a>max) max=a;
        if (a<min) min=a;
    }
    cout<<"\n��������: "<<max<<endl;
    cout<<"\n������: "<<min<<endl;
    input.close();

    //����� ��� ��� ������ �
    input.open("kc.txt");
    ofstream outputPLUS;
    ofstream outputMINUS;
    outputMINUS.open("minus.txt");
    outputPLUS.open("plus.txt");//��� ������������� �����
    input>>a;
    while(!input.eof()){

         if (a>0)
             outputPLUS<<a<<" ";
             else outputMINUS<<a<<" ";
        input>>a;
    }
    outputMINUS.close();
    outputPLUS.close();


    system("PAUSE");

    return 0;
}
