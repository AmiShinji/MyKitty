Program decinpol;
const
n=5;
type
  anketa=record
    lastname:string;
    BirthYear,course:integer;
    math,physics,inform,chem,economy:integer;
    sum:real;
  end;
var
  temp:anketa;
  dudes:array[1..n] of anketa;
  i,j:integer;
begin
  For i:=1 to n do
    begin
      writeln('��������� ������');
      write('������� �������: ');
      readln(dudes[i].lastname);
      write('������� ���� ��� ��������: ');
      readln(dudes[i].BirthYear);
      write('������� ����� �����: ');
      readln(dudes[i].course);
      write('������� ������ �� ����������, ������, �����������, ����� � ���������: ');
      readln(dudes[i].math,dudes[i].physics,dudes[i].inform,dudes[i].chem,dudes[i].economy);
      dudes[i].sum:=(dudes[i].math+dudes[i].physics+dudes[i].inform+dudes[i].chem+dudes[i].economy)/5;
      writeln('������� �� ��������!');
    end;
  for i:=1 to n do
    for j:=1 to n do
    if dudes[i].course<dudes[j].course
      then begin
             temp:=dudes[i];
             dudes[i]:=dudes[j];
             dudes[j]:=temp;
           end;
 for i:=1 to n do
   writeln('�������: ',dudes[i].lastname,'. ','��� ��������: ',dudes[i].BirthYear,'. ','������� ���� ��������: ',dudes[i].sum,'.');
end.