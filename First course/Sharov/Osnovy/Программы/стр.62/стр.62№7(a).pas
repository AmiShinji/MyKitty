Program dvestroki1;
var
  s1,s2,c:string;
  i:integer;
begin
  writeln('������� ����� ������');
  readln(s1);
  writeln('������� ������ ������');
  readln(s2);
  c:='';
  for i:=1 to length(s1) do
        if s1[i]<>s2[i]
          then c:=c+s1[i];
 write(c);
end.