#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

  float a,ma;
  int n;
  cout<<"\n������� ���������� ��������� ������������������: ";cin>>n;
  cout<<"������� �������� ������������������: ";cin>>a;
  ma=a;
  for(int i=1;i<n;i++)
  {
      cin>>a;
      if(a>ma)
        ma=a;
  }
  cout<<"\n";
  cout<<"������������ ������� ������������������: ";cout<<ma;
    system("PAUSE");

    return 0;
}
