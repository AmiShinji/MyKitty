Program kolichestvozadannih;
var
  zstr,str:string;
  count,i,k:integer;
begin
  count:=0;
  writeln('������� �������� ���������');
  readln(zstr);
  writeln('������� ������');
  readln(str);
  k:=pos(zstr, str);
  while k<>0 do 
    begin
      count:=count+1;
      delete(str,k,length(zstr));
      k := pos(zstr,str);
    end;
  writeln('���������� ���������: ',count);
end.
  