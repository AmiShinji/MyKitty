Program competition;
const
n=2;
type
  anketa=record
    lastname,name,fathername:string;
    BirthYear,resul:integer;
  end;
var
  dudes:array[1..n] of anketa;
  temp:anketa;
  i,max:integer;
begin
  max:=0;
  For i:=1 to n do
    begin
      writeln('��������� ������');
      write('������� �������: ');
      readln(dudes[i].lastname);
      write('������� ���: ');
      readln(dudes[i].name);
      write('������� ��������: ');
      readln(dudes[i].fathername);
      write('������� ���� ��� ��������: ');
      readln(dudes[i].BirthYear);
      write('������� ��������� � ������: ');
      readln(dudes[i].resul);
      writeln('������� �� ��������!');
    end;
  for i:=1 to n do
    if dudes[i].resul>max
      then begin
             max:=dudes[i].resul;
             temp:=dudes[i];
           end;
 writeln('����������: ',temp);
 end.