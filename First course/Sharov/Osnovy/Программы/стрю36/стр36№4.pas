Program qq;
var b,x,sum:real;
begin
  write('������� ����� b: ');
  readln(b);
  sum:=0;
  writeln('������� ������ ����� ������������������');
  readln(x);
  while x<>0 do
    begin
      if x>b 
        then sum:=sum+1;
    readln(x);
    end;
  writeln('����� �����: ',sum,'.');
end.
  