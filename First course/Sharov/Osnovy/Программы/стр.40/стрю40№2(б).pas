Program IL;
var
c,k,i,n:integer;
ch:char;
begin
  write('������� ����� ������������������: ');
  readln(n);
  c:=0;
  k:=0;
  for i:=1 to n do
    begin
      readln(ch);
      if ch='�'
        then c:=c+1
        else if ch='�'
              then c:=c+1
              else c:=0;
      if c=2 
        then begin
               k:=k+1;
               c:=0;
             end;
    end;
 if k<>0
   then writeln('���-�� ��������: ',k)
   else writeln('��� ��������');
end.