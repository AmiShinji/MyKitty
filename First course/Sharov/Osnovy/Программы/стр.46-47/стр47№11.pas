Program ship;
var
k1,k2:string;
begin
  write('������� ���� ��� ������ ������ �� K1: ');
  readln(k1);
  writeln('��� �� ',k1);
  writeln('��������� �������');
  readln(k2);
  case k2 of
   '�����':begin
              if k1='�����'
                then writeln('��� �� �����');
              if k1='������'
                then writeln('��� �� ������');
              if k1='��'
                then writeln('��� �� ��');
              if k1='�����'
                then writeln('��� �� �����');
            end;
   '������':begin 
           if k1='�����'
             then writeln('��� �� ������');
           if k1='������'
             then writeln('��� �� ��');
           if k1='��'
             then writeln('��� �� �����');
           if k1='�����'
             then writeln('��� �� noth');
         end;
   '�����': begin
           if k1='�����'
             then writeln('��� �� ��');
           if k1='������'
             then writeln('��� �� �����');
           if k1='��'
             then writeln('��� �� �����');
           if k1='�����'
             then writeln('��� �� ������');
         end;
   '�����': begin
            if k1='�����'
              then writeln('��� �� �����');
            if k1='������'
              then writeln('��� �� �����');
            if k1='��'
              then writeln('��� �� ������');
            if k1='�����'
              then writeln('��� �� ��');
          end;
 end;
end.