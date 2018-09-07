#include <iostream>
#include "rus_io.h"
#include "conio2.h"
#include <math.h>
using namespace std;
int arr[8][8], row[64], col[64];
int ktmov1[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int ktmov2[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int i, j, move_num, d;

void main() {
  addknight();
}
void addknight( )  {
  register int a, b, e;

 /* �������� ������ ��� ���������� � ��������� ���������� ������ */
  arr[i][j] = 1;
  row[move_num] = i;
  col[move_num] = j;
  move_num++;

 /* ��������� 8 ��������� ����������� ���� */
  for ( a = 0 ; a <= 7 ; a++ ) {
   /* ���� ��� ���� �������, �������� �� */
    if ( move_num >= 64 ) {
      writeboard( );
      exit ( 0 );
    }

   /* ���������� ������� � ������ ��� ���������� ���� */
    b = i + ktmov1[a];
    e = j + ktmov2[a];

   /* ���������, ��� ����� ����������� ���� ���� �������� �� ��������� ����� */
    if ( b < 0 || b > 7 || e < 0 || e > 7 )
      continue;

   /* ���������, ���� �� �� ��� � ���� ������ */
    if ( arr[b][e] == 1 )
      continue;
     i = b; j = e;
    addknight();
  }

 /* ��������� ������� ����� � ����������� ������� ��������� ��� */
  move_num-- ;

 /* ����������� ������, ����� ������� ����� */
  arr[row[move_num]][col[move_num]] = 0;
  move_num--;  /* ������� ������� ��������� ��� */
  i = row[move_num]; j = col[move_num];
  move_num++;
}

writeboard( ) {
  int a;

  clrscr( );
  gotoxy ( 1, 10 );
  printf ( "Hit any key for next move " );
  gotoxy ( 1, 11 );
  for ( a = 0 ; a <= 63 ; a++ ) {
    if ( a % 8 == 0 )
      printf ( "\n" );
    printf ( "#" );
  }
  for ( a = 0 ; a &lt;= 63 ; a++ ) {
    gotoxy ( col[a] * 3 + 1, 12 + row[a] );
    printf ( "%3d", a + 1 );
    getch( );
  }
}
