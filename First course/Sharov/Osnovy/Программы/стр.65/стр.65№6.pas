Program abiturienti;
const
  n=240;
  m=3;
type
  document=record
    name,lastname,fathername,homestreet,lang:string;
    sbal,numerpho:integer;
  end;
var
  temp:array[1..m] of document;
  c:array[1..m] of document;
  i,j:integer;
begin
  for i:=1 to m do 
    begin
      write('������� �������: ');
      readln(c[i].lastname);
      write('������� ���: ');
      readln(c[i].name);
      write('������� ��������: ');
      readln(c[i].fathername);
      write('������� �������� �����: ');
      readln(c[i].homestreet);
      write('������� ����,������� ��������: ');
      readln(c[i].lang);
      write('������� ����� ��������: ');
      readln(c[i].numerpho);
      write('������� ����� ������: ');
      readln(c[i].sbal);
      if c[i].sbal>=n
        then begin
               temp[i]:=c[i];
               j:=j+1;
             end;
   end;
 for i:=1 to j do
   writeln(temp[i]);
end.
      
    
      