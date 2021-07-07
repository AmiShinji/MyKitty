unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, math;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Edit5: TEdit;
    Edit6: TEdit;
    Edit7: TEdit;
    Edit8: TEdit;
    Edit9: TEdit;
    Button1: TButton;
    Button2: TButton;
    Edit10: TEdit;
    Button3: TButton;
    Button4: TButton;
    ComboBox1: TComboBox;
    ComboBox2: TComboBox;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    Label10: TLabel;
    Edit11: TEdit;
    Edit12: TEdit;
    Label11: TLabel;
    Label12: TLabel;
    Label13: TLabel;
    Label14: TLabel;
    Label15: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure Edit10Change(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Edit3Change(Sender: TObject);
    procedure Edit2Change(Sender: TObject);

  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  ass: array [1..10] of integer;
  R:integer;
implementation

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
var
  m,i,n:integer;
  ass1:string[10];
  ass2: array [1..4] of integer;
  l:real;
begin

  ass1:=edit1.Text;
  n:=length(ass1);
  m:=0;
  R:=0;
  for i:=1 to n do
  begin
    ass[i]:=strtoint(ass1[i]);
    if ass[i]=1
    then begin
           m:=m+1;
           R:=R+i-1;
         end;
  end;

  edit3.text:=inttostr(n);//n
  edit2.text:=inttostr(m);//m

  l:= Ceil (log2(n));
  edit4.Text:=floattostr(l);

  for i:=1 to n do
    ass2[i]:=0;
    
  button2.enabled:=true;
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  i,j,n,rr:integer;
  coom: string;
  ass2: array [1..4] of integer;
begin

  if edit3.text=''
  then n:=1
  else n:=strtoint(edit3.text);//n

  rr:=R mod n;
  i:=1;

  if rr<>0 then begin
  while rr <> 1 do
  begin
    if (rr mod 2) = 1
    then begin
        rr:=rr div 2;
        ass2[i]:=1;
        inc(i);
    end
    else begin
        rr:= rr div 2;
        ass2[i]:=0;
        inc(i);
    end;
  end;
  ass2[i]:=1;
  end;
  j:=i;
  i:=0;
  coom:='';
  while i<>j do
  begin
    coom:=coom+inttostr(ass2[j]);
    dec(j);
  end;
  edit6.text:=coom;

  coom:='';
  for i:=1 to n do
  begin
    coom:=coom+edit1.text[i]
  end;
  coom:=coom+edit6.text;
  edit5.Text:=coom;

  combobox1.Clear();
  for i:=1 to length(edit5.text) do
  begin
    if edit5.text[i]='1'
    then combobox1.Items.Add('a'+intToStr(i)+' = '+edit5.text[i]);
  end;

  edit10.text:=edit5.text;

end;

procedure TForm1.Button3Click(Sender: TObject);
var
  i,n,m,m1,rr,rrr,j,flag1,pog,Rins,p,flag2:integer;
  ass2: array [1..4] of integer;
  insR: array [1..4] of integer;
  coom:string;
  jp:integer;
begin

  n:=strtoint(edit3.text);
  m1:=strtoint(edit2.Text);
  m:=0;

  combobox2.Clear();
  for i:=1 to length(edit10.text) do
  begin
    if edit10.text[i]='1'
    then combobox2.Items.Add('a*'+intToStr(i)+' = '+edit10.text[i]);
  end;

  for i:=1 to n do
  begin
    if edit10.text[i]='1'
    then inc(m);
  end;
  edit7.text:=inttostr(m);

  for i:=1 to 10 do
  begin
    ass[i]:=0;
  end;

  for i:=1 to n do
  begin
    ass[i]:=strtoint(edit10.text[i]);
    if ass[i]=1
    then begin
           rr:=rr+i-1;
         end;
  end;
  edit9.text:='';

  rr:=rr mod n;
  i:=1;
  if rr<>0 then begin
  while rr <> 1 do
  begin
    if (rr mod 2) = 1
    then begin
        rr:=rr div 2;
        ass2[i]:=1;
        inc(i);
    end
    else begin
        rr:= rr div 2;
        ass2[i]:=0;
        inc(i);
    end;
  end;
  ass2[i]:=1;
  end;
  j:=i;


  for i:=1 to (length(edit10.text)-n) do
  begin
    insR[i]:=strtoint(edit10.text[n+i]);
  end;
  rr:=(length(edit10.text)-n);
  p:=rr;

  for i:=1 to rr do
  begin
    if p=4
    then begin
      if insR[i]=1
      then begin
         if i=1
         then Rins:=Rins+8;
         if i=2
         then Rins:=Rins+4;
         if i=3
         then Rins:=Rins+2;
         if i=4
         then Rins:=Rins+1;
         end;
      end;
    if p=3
    then begin
      if insR[i]=1
      then begin
         if i=1
         then Rins:=Rins+4;
         if i=2
         then Rins:=Rins+2;
         if i=3
         then Rins:=Rins+1;
         end;
      end;
    if p=2
    then begin
      if insR[i]=1
      then begin
         if i=1
         then Rins:=Rins+2;
         if i=2
         then Rins:=Rins+1;
         end;
      end;
    if p=1
    then begin
      if insR[i]=1
      then begin
         if i=1
         then Rins:=Rins+1;
         end;
      end;
  end;

  i:=0;
  coom:='';
  while i<>j do
  begin
    coom:=coom+inttostr(ass2[j]);
    dec(j);
  end;
  edit8.text:=coom;

  jp:=0;
  rr:=rrr;
  pog:=0;
  jp:=0;
  for i:=1 to n do //������� R
         begin
           if edit10.Text[i]='1'
           then pog:=pog+i-1;
         end;


  if (m1-m)>0 //��� ����������
  then begin
         jp:=(rins - (pog mod n))mod n;
         if jp<0 then jp:=jp+n;
         flag2:=1;
         inc(jp);
       end;
  if (m1-m)<0 //��� ����������
  then begin
         jp:=((pog mod n)-rins)mod n;
         if jp<0 then jp:=jp+n;
         flag2:=1;
         inc(jp);
       end;

  if jp<> rins
  then flag1:=1;

  if (flag1=1 and flag2=1) then
  //1100010

  coom:='';
  if jp<>0 then
  begin
    for i:=1 to n do
    begin
      if i=jp then
      begin
        if edit10.text[i]='1'
        then begin
              coom:=coom+'0';
              continue;
              end
        else begin
              coom:=coom+'1';
              continue;
              end;
      end;
      coom:=coom+edit10.text[i];
    end;
  end;
  edit9.text:=coom;
  edit12.Text:=floattostr(jp);

end;


procedure TForm1.Edit1Change(Sender: TObject);
begin
  edit2.text:='';
  edit3.text:='';
  edit4.text:='';
  edit5.text:='';
  edit6.Text:='';

  if (edit1.Text='')
  then button1.Enabled:=false
  else button1.Enabled:=true;

  if (edit1.Text='') or (edit2.Text='')
  then button2.Enabled:=false
  else button2.Enabled:=true;

  ComboBox1.Items.Clear();
end;

procedure TForm1.Edit10Change(Sender: TObject);
begin
  edit7.text:='';
  edit8.text:='';
  edit11.text:='';
  edit12.text:='';

  if (edit10.Text='') or (edit3.Text='')
  then button3.Enabled:=false
  else button3.Enabled:=true;

  ComboBox2.Items.Clear();
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  button1.Enabled:=false;
  button2.Enabled:=false;
  button3.Enabled:=false;
end;

procedure TForm1.Edit3Change(Sender: TObject);
begin
  if (edit10.Text='') or (edit3.Text='') or (edit2.Text='')
  then button3.Enabled:=false
  else button3.Enabled:=true;
  if (edit1.Text='') or (edit2.Text='') or (edit3.Text='')
  then button2.Enabled:=false
  else button2.Enabled:=true;
end;

procedure TForm1.Edit2Change(Sender: TObject);
begin
  if (edit1.Text='') or (edit2.Text='') or (edit3.Text='')
  then button2.Enabled:=false
  else button2.Enabled:=true;
  if (edit10.Text='') or (edit2.Text='') or (edit3.Text='')
  then button3.Enabled:=false
  else button3.Enabled:=true;
end;

end.
