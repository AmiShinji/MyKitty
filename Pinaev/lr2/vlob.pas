Program vlob;
var
i,a,count:integer;
n,p:real;
begin
  write('������� �����: ');
  readln(n);
  write('������� ������� �����: ');
  readln(a);
  p:=1;
  for i:=1 to a do
  begin
    p:=p*n;
    count:=count+1;
  end;
  writeln('���������:',p,'. ','���������� ���������: ',count);
end.
  
      