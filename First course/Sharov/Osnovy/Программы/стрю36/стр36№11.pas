Program qq;
const N=5;
var
i,max,x,p:integer;
begin
max:=0;
for i:=1 to N do
  begin
    readln(x);
    if x>max
      then begin
             max:=x;
             p:=i;
           end;
  end;
writeln('���������� ����� ���������� ������������� ��������: ',p);
end.4
    
          