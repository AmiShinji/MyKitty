Program kolvoend;
var
  consist: file of integer;
  a,k,x,i,sum:integer;
  c,s:string;
begin
  sum:=0;
  writeln('������� ��� �����');
  readln(c);
  writeln('������� ����� ��� �����');
  readln(s);
  assign(consist,c);
  rename(consist,s);
  assign(consist,s);
  reset(consist);
  x:=filesize(consist);
  writeln('������� k-�� �������, � �������� ��������� ������������������');
  readln(k);
  for i:=k to x do
    begin
      read(consist,a);
      write(a,' ');
      sum:=sum+a;
    end;
  writeln('�����: ',sum);
  close(consist);
end.
  