Program qq;
var
c,max,x,i,n:integer;
begin
write('������� ���������� ����� ������������������: ');
read(n);
c:=0;
max:=0;
for i:=1 to N do
  begin
  read(x);
  if x=0
    then c:=c+1
  else c:=0;
  if c>max
    then max:=c;
  end;
  if max<>0
    then writeln('�����: ',max)
  else writeln('��� �����������������');
end.