Program Kramer;    
type
   AM=array [1..2,1..2] of integer;
   var
    a:AM;
    b:array [1..2] of integer;
    i,j,f,op1,op2:integer; 
 function opr(var Dm:AM):integer;
   var
     c:integer;
  begin
    c:=((Dm[1,1]*Dm[2,2])-(Dm[1,2]*Dm[2,1]));
    opr:=c;
  end;    

begin
writeln('������� ����������� ��� �����������:');
for i:=1 to 2 do
  for j:=1 to 2 do
    begin
      write('a[',i,',',j,']=');
      readln(a[i,j]);
    end;
writeln('������� ��������� �����:');
for i:=1 to 2 do
 begin
  write('b[',i,']=');
  readln(b[i]);
 end;
f:=opr(a);
writeln('�������� ������������: ', opr(a));
op1:=((b[1]*a[2,2])-(b[2]*a[1,2]));
writeln('������ ������������: ', op1);
op2:=((a[1,1]*b[2])-(a[2,2]*b[1]));
writeln('������ ������������: ', op2);
writeln('����� x1=',op1/f,', ','x2=',op2/f,'.');
end.
