Program maxleng;
var
l,a:char;
n,i,c,max:integer;
begin
  write('������� ����� ������������������: ');
  readln(n);
  write('������� ������: ');
  readln(l);
  c:=0;
  max:=0;
  for i:=1 to n do
    begin
      readln(a);
      if a=l
        then begin
               c:=c+1;
               if c>max
                 then max:=c;
             end
        else c:=0;e 
    end;
 writeln('�����: ', max);
end.
        