Program kolvoend;
var
  consist: file of integer;
  a,k,x,i,l:integer;
  c:string;
begin
  writeln('������� ��� �����');
  readln(c);
  assign(consist,c);
  reset(consist);
  x:=filesize(consist);
  writeln('������� ���������� �����, ������� ����� ������� � �����');
  readln(k);
  for i:=x downto x-k+1 do
    begin
      l:=i-1;
      seek(consist,l);
      read(consist,a);
      write(a,' ');
    end;
  close(consist);
end.
  
  