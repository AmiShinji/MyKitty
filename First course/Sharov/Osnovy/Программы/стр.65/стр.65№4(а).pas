Program bagazz;
const
  n=3;
type
  bagazh=record
    mesto:integer;
    ves:real;
  end;
var
  a:array[1..n] of bagazh;
  i:integer;
begin
  for i:=1 to n do
    begin
      writeln('������� ���-�� ���� � ����� ������: ');
      readln(a[i].mesto);
      write('������� �� ����� ���: ');
      readln(a[i].ves);
    end;
  for i:=1 to n do
    writeln(a[i]);
end.