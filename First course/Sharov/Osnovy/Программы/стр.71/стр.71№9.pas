Program gram;
var
  F:file of integer;
  a,i,n,k:integer;
  s:string;
begin
  writeln('������� ��� �����.');
  readln(s);
  write('������� ���������� �����,������� ����� ��������: ');
  readln(k);
  assign(F,s);
  reset(f);
  seek(F,filesize(f));
  for i:=1 to k do
    begin
      readln(a);
      write(F,a);
    end;
  close(F);
  reset(F);
  while not eof(F) do
      begin
        read(F,a);
        write(a:3);
      end;
 close(F);
end.
  
  