#include "rus_io.h"
#include <iostream>
#include <stdio.h>
#include "graphics.h"
#include <vector>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;
const int windowX=600,windowY=600;//������ ������������ ����
int n,m,borderColor=8,fillColor=9, deadCellFill=15,colorOfText=1;//borderColor-���� ��� ����� ����, fillColor-���� ��� ���������� ����� ������
string endstring="����� ����!";//deadCellFill-���� ������� ������
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
        setfillstyle(1,fillColor);
        floodfill(cells[i][j].x+5,cells[i][j].y+5,borderColor);//��������� ����� ������
      } else {
               setfillstyle(1,deadCellFill);
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
return newGeneration;
}

bool isContinue(vector<vector<Cell> > &cells,vector<vector<vector<Cell> > > &PeriodCell){ //������� ����������� ���������
  bool flagPeriod=true;
  int countPeriod = 0;
  for (int i=0;i<PeriodCell.size();i++){   //� ������ ������ ��������������� ��������� ���������
    for(int j=0;j<PeriodCell[i].size();j++){  //���� ��������� ���������� ������������ (�.�. ������ ����� ����������)
        for(int k=0;k<PeriodCell[i][j].size();k++){  // ��� ������ �� ������ ������ ���������, �� ��������� ����
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
    endstring="���������� ���������� ���������!";
    return false;
  }

  for (int i=0;i<n;i++){  //� ������ ������ ���� �������� ��
    for (int j=0;j<m;j++){  //������� ����� ������ � ������� ����
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
    if ((n<=0)||(m<=0)){  //�������� ������������ ������� ������
        do
        {
            cout<<"\n����������� ������� ���� ������ �������! ����������, ���������� ��� ���.";
            cout<<endl;
            cin>>n>>m;
        }while((n<=0)||(m<=0));
    }
    cells.resize(n);
    for (int i=0; i<cells.size(); i++){
      cells[i].resize(m);
    }
    init(cells);
    char step; //���������� ���� char ��� ������ ���������� ��������� (�� ����� ��� ���)
    cout<<"\n��������� �� �����? (y/n) "<<endl;
    cin>>step;
    if (  (step!='y')&&(step!='Y')&&(step!='n')&&(step!='N')  ){  //�������� ������������ ������� ������
        do
        {
            cout<<"\n������ ������� �������. ���������� ��� ���. ��������� �� �����? (y/n)";
            cout<<endl;
            cin>>step;
        }while(   (step!='y')&&(step!='Y')&&(step!='n')&&(step!='N')  );
    }
    initwindow(windowX -(windowX%m),windowY -(windowY%n),"���� <<�����>> ");
    floodfill(0,0,deadCellFill);
    setbkcolor(deadCellFill);
    settextstyle(10,0,4);
    setcolor(colorOfText);
    outtextxy(100,50,"����� ����������!");
    outtextxy(70,120,"��� ������������ ����");
    settextstyle(10,0,6);
    outtextxy(90,170," <<�����>>");
    settextstyle(10,0,2);
    outtextxy(10,270,"����� ������ ���� ������� <<������>>.");
    outtextxy(10,295,"����� �������� ������������ ������");
    outtextxy(10,320," � ������� ������.");
    setbkcolor(7);
    setfillstyle(1,7);
    bar3d(200,370,400,450,0,0);
    settextstyle(10,0,4);
    outtextxy(230,395,"������");
    int X,Y;

    do
    {
       if (ismouseclick(WM_LBUTTONDOWN)){
         getmouseclick(WM_LBUTTONDOWN,X,Y);
         if( (X>200)&&(X<400)&&(Y>370)&&(Y<450) ){
    clearviewport();
    setfillstyle(1,deadCellFill);
    floodfill(0,0,deadCellFill);
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
         if (fillColor==getpixel(celloneX, celloneY)){
            setfillstyle(1, deadCellFill);
         } else {
             setfillstyle(1, fillColor);
         }
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
    Sleep(1000);
    clearviewport();
    floodfill(0,0,deadCellFill);
    setbkcolor(deadCellFill);
    settextstyle(10,0,4);
    setcolor(colorOfText);
    if (endstring=="����� ����!"){
        outtextxy(170,250,"����� ����!");
    }else{
        outtextxy(50,250,"����������");
        outtextxy(50,285,"���������� ���������!");
    }
    system("PAUSE");
    getch();
    closegraph();
    return 0;
 }
 }
} while( !(GetAsyncKeyState(VK_TAB)<0) );

}
