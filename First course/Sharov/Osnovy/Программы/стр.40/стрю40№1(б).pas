Program qq;
var
count,max,flag,i:integer;
ch,l:char;
begin 
  count:=0;
  flag:=0;
  max:=0;
  writeln('������� �������� ������: ');
  readln(l);
  writeln('������� ������ �������������� "."');
  readln(ch);
  while ch<>'.' do
    begin
      if ch=l
        then if flag=0
               then begin
                      count:=1;
                      flag:=1;
                    end
               else count:=count+1
        else if count>max
               then begin
                      max:=count;
                      count:=0;
                    end
               else count:=0;  
     readln(ch);
    end;
  if count>max
    then max:=count;
    if max<>0
      then writeln('����� ������������ ������������������: ',max)
      else writeln('��� ������������������');
end.