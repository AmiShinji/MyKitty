Program kominatorika;
var
  n,m,k,i:integer;
  d:real;
Function pesoch(n1,m1,k1:integer):real;
 var
   i:integer;
  begin
    n1:=1;
    m1:=1;
    k1:=1;
    for i:=1 to n do
        n1:=n1*i;
    d:=n1;
    for i:=1 to m do
      m1:=m1*i;
    for i:=1 to k do
      k1:=k1*i;
    pesoch:=n1/(m1*k1);
  end;
begin
  writeln('������� ����� m � n');
  read(m,n);
  k:=n-m;
  writeln('����� ���������: ',pesoch(n,m,k));
  writeln('����� ������������: ',d);
end.
    
  
      
      
      
        