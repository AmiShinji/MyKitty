Program nexfile;
var
  f:file of integer;
  a,n,i:integer;
  s:string;
begin
  writeln('������� ��� �����');
  readln(s);
  writeln('������ ������������������');
  assign(f,s);
  reset(f);
  while not eof(f) do
    begin
      read(f,a);
      write(a,' ');
    end;
  close(f);
  writeln;
  rewrite(f);
  write('������� ����� ������������������: ');
  readln(n);
  writeln('����� ������������������');
  for i:=1 to n do
    begin
      read(a);
      write(f,a);
    end;
  close(f);
  reset(f);
  while not eof(f) do
    begin
      read(f,a);
      write(a,' ');
    end;
end.