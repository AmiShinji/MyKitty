Program rgr;
var
  set1,set2: set of integer;
  i,n,a:integer;
begin
  set1:= [];
  set2:=[];
  writeln('������� ����� ������������������');
  readln(n);
  writeln('������ ������������������: ');
  for i:= 1 to n do
    begin
      read(a);
      if not(a in set1)
        then begin
               set1:=set1+[a];
               if not (a in set2)
                 then set2:=set2+[a];
             end
        else  if a in set2
                  then set2:=set2-[a];
              end;
 if set2<>[]
   then writeln('�����,������� ����������� � ������������������ ���� ���: ',set2)
   else writeln('��� �����, ������� ������ � ������������������ �� ������ ����.');
end.