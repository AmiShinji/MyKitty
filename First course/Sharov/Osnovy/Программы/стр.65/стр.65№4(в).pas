Program bagazz;
const
  n=5;
type
  bagazh=record
    lastname:string;
    mesto:integer;
  end;
var
  a:array[1..n] of bagazh;
  i,count:integer;
begin
  count:=0;
  for i:=1 to n do
    begin
      write('������� �������: ');
      readln(a[i].lastname);
      write('������� ���-�� ���� � ����� ������: ');
      readln(a[i].mesto);
      if a[i].mesto>2
        then count:=count+1;
    end;
  writeln('���������� ����������,� ���� ������ ����� ���� ����: ',count,'.');
end.
 