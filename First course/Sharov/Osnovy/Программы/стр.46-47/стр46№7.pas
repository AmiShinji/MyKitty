Program vremyagoda;
type 
TMonth=(Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec);
TSeason=(Spr,Sum,Aut,Win);
var
month:integer;
begin
  write('������� ����� ������: ');
  readln(month);
  case TMonth(month-1) of
    Mar..May: writeln('�����');
    Jun..Aug:writeln('����');
    Sep..Nov:writeln('�����');
    Dec,Jan,Feb:writeln('����')
  else writeln('�������� ����� ������');
  end;
end.