#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <string>
using namespace std;

bool polindrom(string word)
{
	int len = word.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    string str;
	cout << "������� ������: ";
	cin >> str;
	if(polindrom(str))
	{
		cout << "���������"<<endl;
	}
	else
	{
		cout << "�� ���������"<<endl;
	}

    system("PAUSE");

    return 0;
}
