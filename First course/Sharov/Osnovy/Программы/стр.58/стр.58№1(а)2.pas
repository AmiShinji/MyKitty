Program yati;
var
  str, res:string;
  k,i:integer;
begin
   k:=0;
   i:=1;
   writeln('������� ������');
   read(str);
   while length(str)<>0 do
     begin
       if str[1] = '�'
       then res := res + '��'
       else res := res + str[i];
       delete(str, 1, 1);
     end;
  writeln(res);
end.  