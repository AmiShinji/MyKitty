Program qq;
type
  alphabet= set of char;
var
  a:alphabet;
  s:string;
  i,count:integer;
begin
  a:=['�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�'];
  count:=0;
  writeln('������� ������');
  read(s);
  for i:=1 to length(s) do
      if s[i] in a
        then count:=count+1;
  writeln('� �������� ������������������ ',count,' ������� ����.');
end.