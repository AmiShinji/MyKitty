#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

string VID (int m[]){

    int count=0,k=n;
    for (int i=0;i<(k-1);i++){
        if (m[i]<m[i+1]){
            count++;
        }
    }
    if (count == k){
        cout<<"\n������ ���������� �� �����������\n";
        exit(1);
    }else {
    count=0;
    for (int i=0;i<(k-1);i++){
       if ( m[i]>m[i+1]){
        count++;
       }
    }
    if (count==k){
        cout<<"\n������ ���������� �� ��������\n";
    }else cout<<"\n������ ������������\n";
    }
}


int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    int n;
    cout<<"\n������� ����� ������������������: ";
    cin>>n;
    int mas[n];
    cout<<"\n������� ������������������: ";
    for (int i=0;i<n;i++){
        cin>>mas[i];
    }
    VID(mas[n]);

    system("PAUSE");

    return 0;
}
