Program gram;
var
  F:text;
  a,i,n,max,min:integer;
  s:string;
begin
  writeln('������� ��� �����.');
  readln(s);
  assign(F,s);
  reset(F);
  min:=10000;
  max:=0;
  while not eof(F) do
      begin
        read(F,a);
        if a>max
          then max:=a;
        if a<min
          then min:=a;
        write(a:3);
      end;
 close(F);
 writeln;
 write('��������: ',max,'. ','�������: ',min,'.');
end.