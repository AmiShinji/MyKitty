Program simbol;
var
sym:char;
begin
  write('������� ������: ');
  readln(sym);
  case ord(sym) of
    48..57:writeln('�����');
    65..90:writeln('��������� ��������� �����');
    97..122:writeln('�������� ��������� �����');
    1040..1071:writeln('��������� ������� �����');
    1072..1103:writeln('�������� ������� �����')
    else writeln('�����������');
 end;
end.