Program alpphabet;
const
alf='�����������娸����������������������������������������������������';
var
s:string;
i,k:integer;
begin
  writeln('������� ������');
  read(s);
  k:=0;
  for i:=1 to 66 do
    if pos(alf[i],s)>0 
      then begin
             k:=1;
             write(alf[i]);
           end;
 if k=0
   then writeln('������� ���� ���');
 end.