Program qq;
var sum,x,b:real;
k:integer;
begin
  sum:=0;
  k:=0;
  write('������� ����� b: ');
  readln(b);
  write('������� ������ ����� ������������������: ');
  readln(x);
  while x<>0 do
    begin
      if x>b
        then begin
               sum:=sum+x;
               inc(k);
             end;
      readln(x);
    end;
  sum:=sum/k;
  writeln('������ �������������� :', sum);
end.