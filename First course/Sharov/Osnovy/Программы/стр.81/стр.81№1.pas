Program factorial;
Function fac(a:integer):integer;
  var
    f,i:integer;
  begin
    f:=1;
    for i:=1 to a do
      f:=f*i;
    fac:=f;
  end;
var
  n,m:integer;
begin
  writeln('������� m � n');
  readln(m,n);
  writeln('����� ������������ n=',fac(n));
  writeln('����� ��������� m=',fac(n)/(fac(n-m)*fac(m)) );
end.