Program qq;
var
f,max,x,n,i:integer;
begin
  writeln('������� ����� ������������������: ');
  read(n);
  f:=1;
  read(x);
  max:=x;
  for i:=2 to n do
    begin
      read(x);
      if x> max
        then begin
               max:=x;
               f:=f+1;
             end;  
    end;
  if f=n 
    then writeln('������������������ ������������')
    else writeln('�� ������������');
end.