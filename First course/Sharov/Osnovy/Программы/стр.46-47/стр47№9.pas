Program rubls;
var
a:integer;
begin
  writeln('���������� ������ �� 30: ');
  readln(a);
  case a of
    1,21:writeln(a,' �����');
    2,3,4,22,23,24: writeln(a,' �����');
    5..20,25..30: writeln(a,' ������');
 end;
end.
 