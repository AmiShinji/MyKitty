Program decinpolar;
type
  polar=record
    re,im:real;
  end;
var
  r,f:polar; 
  x,y:integer;
begin
  writeln('������� ���������� ����� � ���������� ������� ���������');
  readln(x,y);
  r.im:=sqrt(sqr(x)+sqr(y));
  f.re:=arctan(y/x);
  writeln('�������� ������ r=',r.im);
  writeln('�������� ���� f=',f.re);
end.