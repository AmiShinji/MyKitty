Program summatrix;
const
  n=3;
type
  TA=array[1..n,1..n] of integer;
  TB=array[1..n,1..n] of integer;
  TC=array[1..n,1..n] of integer;
  TY=array[1..n] of integer;
  TX=array[1..n] of integer;
var
  a:TA;
  b:TB;
  c:TC;
  x:TX;
  y:TY;
  i,j,prz:integer;
  begin
    writeln('������� �������� ������� a b');
    for i:=1 to n do
      for j:=1 to n do
        begin
          read(a[i,j],b[i,j]);
          c[i,j]:= a[i,j]+b[i,j];
        end;
   writeln('���������� �������� �=�+B: ');
   for i:=1 to n do
     begin
       for j:=1 to n do
         write(c[i,j],' ');
       writeln;
     end;
    writeln('������� ������-������� X');
    for i:=1 to n do
        read(x[i]);
    for i:=1 to n do
      begin
        for j:=1 to n do
          prz:=prz+ a[i,j]*x[j];
        y[i]:=prz;
        prz:=0;
      end;
    writeln('����� y=A*x: ');
    for i:=1 to n do
      write(y[i],' ');
end.