Program bagazz;
const
  n=5;
type
  bagazh=record
    lastname:string;
    mesto,veshi:integer;
  end;
var
  a:array[1..n] of bagazh;
  i,count,sum:integer;
begin
  count:=0;
  sum:=0;
  for i:=1 to n do
    begin
      write('������� �������: ');
      readln(a[i].lastname);
      write('������� ���-�� ���� � ����� ������: ');
      readln(a[i].mesto);
      write('������� ���-�� ����� � ����� ������: ');
      readln(a[i].veshi);
      sum:=sum+a[i].mesto;
    end;
  for i:=1 to n do
    if a[i].veshi>(sum/n)
      then count:=count+1;
  writeln('���������� ����������,� ������� ���-�� ����� ����������� ������� ���-�� ����: ',count,'.');
end.
 