Program bagazz;
const
  n=3;
type
  bagazh=record
    lastname:string;
    mesto:integer;
    ves:real;
  end;
var
  a:array[1..n] of bagazh;
  i,sum:integer;
  sv:real;
begin
  sum:=0;
  sv:=0;
  for i:=1 to n do
    begin
      write('������� �������: ');
      readln(a[i].lastname);
      write('������� ���-�� ���� � ����� ������: ');
      readln(a[i].mesto);
      write('������� �� ����� ���: ');
      readln(a[i].ves);
      sum:=sum+a[i].mesto;
      sv:=sv+a[i].ves;
    end;
  for i:=1 to n do
    if (abs ((a[i].ves/a[i].mesto)-(sv/sum)) )<=0.3
      then writeln(a[i].lastname);
end.