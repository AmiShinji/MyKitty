Program calculator;
var
  a,b:real;
  ch:char;
begin
  writeln('������� ��� �����');
  readln(a,b);
  writeln('������� ��������');
  readln(ch);
  case ch of
  '+': writeln(a,'+',b,'=',a+b);
  '-': writeln(a,'-',b,'=',a-b);
  '*': writeln(a,'*',b,'=',a*b);
  '/': writeln(a,'/',b,'=',a/b);
  end;
end.