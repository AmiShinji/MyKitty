Program decinpol;
const
n=2;
type
  anketa=record
    lastname,gender:string;
    BirthYear,course,growth:integer;
    math,physics,inform,chem,economy:integer;
  end;
var
  dude:anketa;
  i:integer;
begin
  For i:=1 to n do
    begin
      writeln('��������� ������');
      write('������� �������: ');
      readln(dude.lastname);
      write('������� ���� ���: ');
      readln(dude.gender);
      write('������� ���� ��� ��������: ');
      readln(dude.BirthYear);
      write('������� ����� �����: ');
      readln(dude.course);
      write('������� ������ �� ����������, ������, �����������, ����� � ���������: ');
      read(dude.math,dude.physics,dude.inform,dude.chem,dude.economy);
      write('������� ���� ����: ');
      readln(dude.growth);
      writeln('������� �� ��������!');
    end;
 end.
    
    
    