Program qq;
var
  s,s2:string;
  i,count,max:integer;
begin
  count:=0;
  writeln('������� ������');
  read(s);
  for i:=Pos(',',s) to length(s) do
    begin
      if s[i]<>','
        then begin
               count:=count+1;
               if count>max
                 then max:=count;
             end
      else count:=0;
    end;  
writeln('�����: ', max);
end.