Program Gorner;
type
  mas=array[0..100] of integer;
var
  a:mas;
  i,x,n,p,s:integer;
begin
  writeln('������� ������������ ������� ����������.');
  readln(n);
  writeln('������� �������� ���������.');
  readln(x);
  writeln('������� ',n+1,' �������������.');
  for i:=0 to n do
    read(a[i]);
  p:=1;
  s:=0;
  for i:= 0 to n do
    begin 
      s:=s*x+a[i];
    end;
  write('�����: ',s,'.');
  end.
    