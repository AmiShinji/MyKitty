#include "rus_io.h"
#include <iostream>
#include <stdio.h>
#include "graphics.h"
#include <vector>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;
const int windowX=500,windowY=500;//������ ������������ ����
int n,m,countstate,borderColor=1,fillColor=9, deadCellFill=0;//borderColor-���� ��� ����� ����, fillColor-���� ��� ���������� ����� ������

bool flag=true;
                                              //deadCellFill-���� ������� ������
struct Cell{
    int x;
    int y;
    bool isAlive;
};

void printCells(vector<vector<Cell> > cells ){ //������ ���� � ��������� ����� ������
  setcolor(borderColor);
  for(int i=0; i<n;i++){
    line(0,((windowY/n)*i),windowX,((windowY/n)*i));//�������������� �����
  }
  for(int i=0; i<m;i++){
    line(((windowX/m)*i),0,((windowX/m)*i),windowY);//������������ �����
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if (cells[i][j].isAlive==true){
        setfillstyle(borderColor,fillColor);
        floodfill(cells[i][j].x+5,cells[i][j].y+5,borderColor);//��������� ����� ������
      } else {
               setfillstyle(borderColor,deadCellFill);
               floodfill(cells[i][j].x+5,cells[i][j].y+5,borderColor);//���� ������ �� �������� �����,
             }                                                        //�� � ���� �� ��������
    }
  }
}

void init(vector<vector<Cell> >&cells ){  //������ ������ ������ ��� ���������� ��������
  for (int i=0;i<n;i++){                  //�� � ���������:������� ��� �����
    for (int j=0;j<m;j++){
      cells[i][j].x=( ( (windowX/m)*j )+ ( (windowX/m)/2) );
      cells[i][j].y=( ( (windowY/m)*i )+ ( (windowY/m)/2) );
    }
  }
}

/*void compareGenerations(vector<vector<Cell> > &cells, vector<vector<Cell> > &newGeneration){
  for ( int i=0;i<n;i++){
    for (int j=0; j<m;j++){
      if (cells[i][j].isAlive!=newGeneration[i][j].isAlive){
        countstate=0;//��������� ���������( �� ���� ������ �� ������ ������ ��������� ��� ������ )
        return;
      }
    }
  }
  countstate++;
}*/

vector<vector <Cell> > buildNextGeneration(vector<vector <Cell> > &cells){  //������� ������ �������
vector< vector <Cell> > newGeneration;
newGeneration = cells;
for (int i=0;i<n;i++){
  for (int j=0;j<m;j++){
    int alive = 0;//������� ����� ������
      for(int c = -1; c < 2; c++){
        for(int d = -1; d < 2; d++){
          if(!(c == 0 && d == 0)){
            if ( ((i+c)>=0) && ((i+c)<n)&&((j+d)>=0) && ((j+d)<m) ){  //�������� �� ����� �� ������� �������
              if(cells[i+c][j+d].isAlive){
                ++alive;
              }
            }
          }
        }
      }

    if(alive < 2){
      newGeneration[i][j].isAlive = false;
    } else if(alive == 3){
             newGeneration[i][j].isAlive = true;
           } else if(alive > 3){
                    newGeneration[i][j].isAlive = false;
                  }
  }
}
//compareGenerations(cells, newGeneration);
return newGeneration;
}

bool isContinue(vector<vector<Cell> > &cells,vector<vector<vector<Cell> > > &PeriodCell){ //������� ����������� ���������
  /*if (countstate > 2){
    return false;
  }*/

  bool flagPeriod=true;
  int countPeriod = 0;
  for (int i=0;i<PeriodCell.size();i++){
    for(int j=0;j<PeriodCell[i].size();j++){
        for(int k=0;k<PeriodCell[i][j].size();k++){
            if (PeriodCell[i][j][k].isAlive!=cells[j][k].isAlive){
                    flagPeriod=false;
            }
        }
    }
    if (flagPeriod){
        countPeriod++;
    }
    flagPeriod=true;
  }
  if (countPeriod>0){
    return false;
  }

  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if ( cells[i][j].isAlive==true){
        return true;
      }
    }
  }
  return false;
}


int main () {
    setRusLocale(); //��������� ���������
    vector<vector<vector<Cell> > > PeriodCell;
    cout<<"\n��� ������������ ���� � ""�����!";
    vector<vector<Cell> >cells;
    cout<<"\n������� ����������� �������� ���� (nxm): ";
    cin>>n>>m;
    cells.resize(n);
    for (int i=0; i<cells.size(); i++){
      cells[i].resize(m);
    }
    init(cells);
    char step; //���������� ���� char ��� ������ ���������� ��������� (�� ����� ��� ���)
    cout<<"\n��������� �� �����? (y/n) "<<endl;
    cin>>step;
    initwindow(windowX -(500%m),windowY -(500%n),"���� <<�����>> ");
    setcolor(borderColor);
    for(int i=0; i<n;i++){
      line(0,((windowY/n)*i),windowX,((windowY/n)*i));//�������������� �����
    }
    for(int i=0; i<m;i++){
       line(((windowX/m)*i),0,((windowX/m)*i),windowY);//������������ �����
    }
    int celloneX,celloneY;
    do
    {
       if (ismouseclick(WM_LBUTTONDOWN)){
         getmouseclick(WM_LBUTTONDOWN, celloneX, celloneY);
         setfillstyle(1,fillColor);
         floodfill(celloneX, celloneY,borderColor);
       }
    }while( !(GetAsyncKeyState(VK_SPACE)<0) );//��������� �������:���� �� ����� ������, �������� ��������� ������
    for (int i=0;i<n;i++){                   // � ������ ���������
      for (int j=0;j<m;j++){
        if (fillColor==getpixel(cells[i][j].x,cells[i][j].y) ){
          cells[i][j].isAlive=true;
        }
      }
    }
    while (isContinue(cells,PeriodCell)){// ���� ������ ���� � ��������� ����������� �
      Sleep(100);  // ��������� ����� ���������
      if ((step=='y') || (step=='Y') ){
        getch();
      }
      PeriodCell.push_back(cells);
      if (PeriodCell.size()==10){
        PeriodCell.erase(PeriodCell.begin());
      }
      cells = buildNextGeneration(cells);
      printCells(cells);
    }
    cout<<"����� ����."<<endl;
    system("PAUSE");
    getch();
    closegraph();
    return 0;
}

