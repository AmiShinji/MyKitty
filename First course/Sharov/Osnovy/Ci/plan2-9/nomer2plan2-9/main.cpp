#include <iostream>
#include "rus_io.h"
#include "conio2.h"

using namespace std;
struct node;
typedef node*ref;
struct node
{
    ref next;
    int dat;
};
void InsRing ( ref &p,int a)
{
    ref q;
    q=new node;
    q->dat=a;
    q->next=p->next;
    p->next=q;
}

void DelRing (ref & p)
{
    ref q;
    q=p->next;
    p->dat=q->dat;
    p->next=q->next;
    delete q;
}
int main()
{
    setRusLocale(); //��������� ���������
    textcolor(WHITE); //���� ������ - �����

    ref ring=NULL,cur=NULL;
    ring=new node;
    ring->next=ring;
    cur=ring;
    do
    {
        cur->next=new node;
        cur=cur->next;
        cout<<"\n������� �����: ";
        cin>> cur->dat;
    }while ( cur->dat!=0);
    cur->next=ring;
    cur=ring->next;
    int d,past;
    cout<<"\n������� ������������ �����, ������� ����� ��������: ";
    cin>>past;
    cout<<"\n������� �����, ������� ����� ��������� �� ������: ";
    cin>>d;
    while (cur!=ring)
    {
        if (cur->dat==-1){
            InsRing(cur,past);
        }

        if ( cur->dat == d){
            DelRing(cur);
        }

        cur=cur->next;
    }
    cur=ring->next;

    while (cur!=ring){
        cout<<cur->dat<<' ';
        cur=cur->next;
    }

    cur->next=ring;
    cur=ring->next;

    //����� ������!
    //��������� �������

    system("PAUSE");

    return 0;
}
