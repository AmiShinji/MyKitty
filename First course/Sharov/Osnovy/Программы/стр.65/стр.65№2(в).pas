Program rost;
const
n=3;
type
  anketa=record
    lastname,gender:string;
    BirthYear,course,growth:integer;
    math,physics,inform,chem,economy:integer;
  end;
var
  dude:anketa;
  i,count,sum,max,min:integer;
  nameX,nameN:string;
  
begin
  For i:=1 to n do
    begin
      writeln('��������� ������');
      write('������� �������: ');
      readln(dude.lastname);
      write('������� ���� ���: ');
      readln(dude.gender);
     { write('������� ���� ��� ��������: ');
      readln(dude.BirthYear);
      write('������� ����� �����: ');
      readln(dude.course);
      write('������� ������ �� ����������, ������, �����������, ����� � ���������: ');
      read(dude.math,dude.physics,dude.inform,dude.chem,dude.economy);}
      write('������� ���� ����: ');
      readln(dude.growth);
      if dude.gender='�������'
        then begin
               count:=count+1;
               sum:=sum+dude.growth;
               if dude.growth>max
                 then begin
                        nameX:= dude.lastname;
                        max:=dude.growth;
                      end;
               if min=0
                 then min:=dude.growth
                 else if dude.growth<min
                        then begin
                               nameN:=dude.lastname;
                               min:=dude.growth;
                             end;   
             end;
      writeln('������� �� ��������!');
    end;
  writeln('������� ���� ��������� �������� ����: ', sum/count);
  writeln('����� ������� �������: ',nameX,'. ','��� ����: ',max,'.');
  write('����� ������ �������: ',nameN,'. ','��� ����: ',min,'.');
 end.
    
    
    