Program tip1;
var
  consist: file of integer;
  n,i,a:integer;
  c:string;
begin
  writeln('������� ��� �����');
  readln(c);
  assign(consist,c);
  rewrite(consist);
  write('������� ����� ������������������: ');
  readln(n);
  for i:=1 to n do
    begin
      readln(a);
      write(consist,a);
    end;
    reset(consist);
     for i:=1 to n do
       begin
         read(consist,a);
         write(a,' ');
       end;
 close(consist);
 end.