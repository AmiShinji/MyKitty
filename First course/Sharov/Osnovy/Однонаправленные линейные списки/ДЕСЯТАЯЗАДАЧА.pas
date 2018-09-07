Program kratniekudalit;
type
  ref=^node;
  node=record
    next:ref;
    data:integer;
  end;
var
  ring:ref;
  k:integer;
  
  
 
Procedure InputRing(var ring:ref);
var
  q:ref;
  a,n,i:integer;
begin
  new(ring);
  q:=ring;
  write('���������� ��������� � ��������� ������: ');
  readln(n);
  for i:=1 to n do
    begin
      new(q^.next);
      q:=q^.next;
      write('������� �������: ');
      readln(a);
      q^.data:=a;
    end;
  q^.next:=ring;
end;

Procedure PrintRing(caption:string; ring:ref);
  var
    q:ref;
  begin
    write(caption,': ');
    q:=ring;
    while q^.next <> ring do
      begin
        q:=q^.next;
        write(q^.data,' ');
      end;
  end;

Procedure prostodel( var p:ref);
var
  q:ref;
begin
  q:=p^.next;
  p^.data:=q^.data;
  p^.next:=q^.next;
  dispose(q);
end;


Procedure delKznach(ring:ref);
var
  q:ref;
begin
  q:=ring;
  while q^.next<>ring do
    begin
      q:=q^.next;
      if ( (q^.data/k) ) = 0
        then prostodel(ring);
    end;
{ if (q^.next=ring) and ( (ring^.data/k)=0 )
   then prostodel(ring);}
end;

begin
  write('������� �������� ����� k: ');
  readln(k);
  InputRing(ring);
  PrintRing('�������� ��������� ������',ring);
  delKznach(ring);
  PrintRing('���������� ��������� ������',ring);
end.