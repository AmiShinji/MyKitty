Program qq;
var
c,b,x:integer;
begin
c:=0;
writeln('������� ������ ����� ������������������: ');
read(x);
b:=x;
while x<>0 do
  begin
    if b*x<0
      then c:=c+1;
      b:=x;
    read(x);
  end;
if c<>0 
  then writeln(c)
else writeln('���');
end.