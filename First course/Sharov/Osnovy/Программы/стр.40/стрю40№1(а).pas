Program qq;
var
count:integer;
ch,l:char;
begin
  count:=0;
  writeln('������� �������� ������: ');
  readln(l);
  writeln('������� ������ �������������� "."');
  read(ch);
  while ch<>'.' do
      begin
        if l=ch
          then count:=count+1;
        read(ch);
      end;
  if count<>0
    then writeln('���-�� ��������: ',count)
    else writeln('�������� ���');
end.
      