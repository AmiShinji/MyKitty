Program Japan;
var
col,y:integer;
begin
write('������� ���: ');
readln(y);
col:= ((abs(y-1988+1)) mod 5);
case col of
  0:write('������ - ');
  1:write('������� - ');
  2:write('Ƹ���� - ');
  3:write('����� - ');
  4:write('׸���� - ');
end;
case ((y-1984) mod 12) of
  0:write('�����');
  1:write('������');
  2:write('����');
  3:write('����');
  4:write('������');
  5:write('����');
  6:write('������');
  7:write('����');
  8:write('��������');
  9:write('������');
  10:write('������');
  11:write('������');
end;
end.  