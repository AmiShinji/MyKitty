Program qq;
var count,b,e,x:integer;
begin
  count:=0;
  write('������� ����� b: ');
  readln(b);
  write('������� �������� �������� e: ');
  readln(e);
  writeln('������� ������ ����� ������������������.');
  readln(x);
  while x<>0 do
    begin
      if (abs(b-x)<=e) and (b<>x)
        then count:=count+1;
      readln(x);
    end;
  if count>0
    then writeln('����������: ',count)
    else writeln('������� ���');
end.