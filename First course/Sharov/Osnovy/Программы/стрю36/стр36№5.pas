Program qq;
var sum,x:real;
k:integer;
begin
  sum:=0;
  k:=0;
  write('������� ������ ����� ������������������: ');
  readln(x);
  while x<>0 do
    begin
      sum:=sum+x;
      inc(k);
      readln(x);
    end;
  sum:=sum/k;
  writeln('������ �������������� :', sum);
end.