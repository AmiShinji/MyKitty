Program nachbukv;
var
count,flag:integer;
ch,l:char;
begin
  write('������� �������� ������: ');
  readln(l);
  writeln('������� ������ ������� �����������');
  readln(ch);
  flag:=0;
  count:=0;
  if ch=l
    then begin
           count:=count+1;
           flag:=1;
         end;
  while ch<>'.' do
    begin
      if ch=' '
        then flag:=0;
      if  (flag=0) and (ch=l)
        then begin
               count:=count+1;
               flag:=1;
             end;
      readln(ch);
    end;
 if count<>0
   then writeln('���-��: ',count)
   else writeln('��� ����, ������������ � ',l);
end.
      