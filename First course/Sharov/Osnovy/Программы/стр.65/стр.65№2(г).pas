Program rost;
const
n=3;
type
  anketa=record
    lastname,gender:string;
    math,physics,inform,chem,economy:integer;
    sredn:real;
  end;
var
  dudes:array[1..n] of anketa;
  i,count,sum:integer;
begin
  sum:=0;
  count:=0;
  for i:=1 to n do
    begin
      writeln('��������� ������');
      write('������� �������: ');
      readln(dudes[i].lastname);
      writeln('������� ���� ���: ');
      readln(dudes[i].gender);
      write('������� ������ �� ����������, ������, �����������, ����� � ���������: ');
      readln(dudes[i].math,dudes[i].physics,dudes[i].inform,dudes[i].chem,dudes[i].economy);
      if dudes[i].gender='�������'
        then begin
               count:=count+1;
               sum:=sum+dudes[i].math+dudes[i].physics+dudes[i].inform+dudes[i].chem+dudes[i].economy;
               dudes[i].sredn:=(dudes[i].math+dudes[i].physics+dudes[i].inform+dudes[i].chem+dudes[i].economy)/5;
             end;     
      writeln('������� �� ��������!');
    end;
    for i:=1 to n do
      if (dudes[i].sredn>(sum/(count*5))) and (dudes[i].gender='�������')
        then writeln('���������, � ������� ������� ���� ���� ��� ������� ���� � ���� ���������: ', dudes[i].lastname);
  writeln('������� ���� ���� ���������: ', sum/(count*5));
 end.
    
