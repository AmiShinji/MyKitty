Program massive;
const
  n=5;
Type
  Amas=array[1..n] of integer;
var
  a:Amas;
  i:integer;
Function m(b:Amas):string;
  var
    j,c,k:integer;
  begin
    c:=1;
    k:=1;
    for j:=1 to n-1 do
     if b[j]<= b[j+1]
       then begin
              c:=c+1;
              if c=n
                then m:='������������������ ������������';
            end;
    for j:=1 to n-1 do
      if b[j] >= b[j+1]
        then begin
               k:=k+1;
               if k=n
                 then m:='������������������ ���������';
             end;
    if (c<>n) and (k<>n)
      then m:='����������������� ���������������';
  end;       
begin
  writeln('������� ������������������');
  for i:=1 to n do
    read(a[i]);
  writeln(m(a));
end.