var
 f:file of integer;
 a,n,i:integer;
 s:string;
begin
n:=0;
 write('������� ��� ����� ');
 readln(s);
 assign(f,s);
 reset(f);
 while not eof(f) do 
    begin
      read(f,a);
      write(a,' ');
      n:=n+1;
    end; 
    writeln;

 rewrite(f);
 for i:=1 to n do
  begin
   readln(a);
   write(f,a);
   end;
   writeln('��������� ');
 reset(f);
 for i:=1 to n do
  begin
   read(f,a);
   write(a,' ');
end;


end.