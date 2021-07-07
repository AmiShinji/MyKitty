unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, XPMan, math;

type
  TForm1 = class(TForm)
    InfP: TEdit;
    Label1: TLabel;
    lEdit: TEdit;
    mEdit: TEdit;
    nEdit: TEdit;
    kLabel: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    kodP: TEdit;
    Label4: TLabel;
    mzedit: TEdit;
    Label5: TLabel;
    rEdit: TEdit;
    Label6: TLabel;
    rsmallEdit: TEdit;
    NLabel: TLabel;
    resultEdit: TEdit;
    Label7: TLabel;
    vvod: TButton;
    encode: TButton;
    aDropdown: TComboBox;
    aLabel: TLabel;
    decode: TButton;
    azDropDown: TComboBox;
    Label8: TLabel;
    acceptedCode: TEdit;
    Label9: TLabel;
    ExitButton: TButton;
    Label10: TLabel;
    Label11: TLabel;
    R2Edit: TEdit;
    Label12: TLabel;
    JEdit: TEdit;
    procedure ExitButtonClick(Sender: TObject);
    procedure vvodClick(Sender: TObject);
    procedure encodeClick(Sender: TObject);
    procedure InfPChange(Sender: TObject);
    procedure acceptedCodeChange(Sender: TObject);
    procedure decodeClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  n,m,k,l:integer;

implementation

{$R *.dfm}

procedure TForm1.ExitButtonClick(Sender: TObject);
begin
 Form1.Close;
end;

procedure TForm1.vvodClick(Sender: TObject);
var i:integer;
begin
 if length(infP.text)>10 then
  begin
   showMessage('������� ������������������ ������ 10');
   exit;
  end;
 for i:=1 to length(InfP.Text) do
  if not (infp.text[i] in ['0','1']) then
   begin
    showMessage('������������ �������������� ������������������');
    exit;
   end;
 n:=length(infp.Text);
 m:=0;
 for i:=1 to length(infp.text) do
  if infp.text[i]='1' then
   inc(m);
 l:=ceil(log2(n));
 nEdit.Text := intToStr(n);
 medit.text := inttostr(m);
 lEdit.Text := intTOStr(l);
 encode.Enabled:=true;
 vvod.Enabled:=false;
end;

function IntToBinLowByte(Value: LongWord; n:integer): string;
var
  i: Integer;
begin
  SetLength(Result, 8);
  for i := 25 to 32 do begin
    if ((Value shl (i-1)) shr 31) = 0 then begin
      Result[i-24] := '0'
    end else begin
      Result[i-24] := '1';
    end;
  end;
  result:=copy(result,8-n+1,n);
end;

procedure TForm1.encodeClick(Sender: TObject);
var i,j,r:integer;
begin
 aDropDown.ItemIndex:=-1;
 aDropDOwn.Items.clear;
 j:=1;
 r:=0;
 for i:=1 to length(INfp.Text) do
  if infp.text[i]='1' then
  begin
   aDropDown.Items.Add('a'+intToStr(j)+' = '+intToStr(i-1));
   inc(j);
   r:=r+i-1;
  end;
 r:=r mod n;
 rEdit.Text:=IntToBinLowByte(r,l);
 kodp.Text:=infp.Text+Redit.Text;
 acceptedCode.Text:=kodp.Text;
 aDropDown.enabled:=True;
 kodP.enabled:=true;
end;

procedure TForm1.InfPChange(Sender: TObject);
begin
 if vvod.enabled=false then
  begin
   vvod.enabled:=true;
   aDropDown.ItemIndex:=-1;
   aDropDOwn.Items.clear;
   aDropDOwn.enabled:=false;
   lEdit.Text:='';
   mEdit.Text:='';
   REdit.Text:='';
   nEdit.Text:='';
   kodP.Text:='';
   kodp.Enabled:=false;
   encode.Enabled:=false;
  end;
 if length(infp.text)=0 then
  begin
   vvod.Enabled:=false
  end;
end;

procedure TForm1.acceptedCodeChange(Sender: TObject);
begin
 if length(acceptedCode.TExt)>0 then
  begin
   decode.enabled:=true;
  end
 else
  begin
   decode.Enabled:=false;
  end;
 mzedit.text:='';
 R2Edit.Text:='';
 rsmallEdit.Text:='';
 JEdit.Text:='';
 azDropDown.Clear;
 azDropDown.ItemIndex:=-1;
 azDropDown.Enabled:=false;
 resultEdit.enabled:=false;
 resultEdit.Text:='';
end;

procedure TForm1.decodeClick(Sender: TObject);
var i,j,k,mz,rnew,l,rDiff,mDiff,rIdx,rOld,tmp:integer; s:string;
a: array [1..1000] of real;
begin
 azDropDown.ItemIndex:=-1;
 azDropDOwn.Items.clear;
  resultedit.enabled:=true;
 azDropDOwn.Enabled:=true;
 mzEdit.text:='';
 R2Edit.text:='';
 rSmallEdit.text:='';
 JEdit.text:='';
 ResultEdit.text:='';

 //check m n

 mz:=0;
 for i:=1 to n do
  if acceptedCode.text[i]='1' then
   inc(mz);
 mzedit.Text:=intToStr(mz);
 mDiff:=mz-m;

  l:=ceil(log2(n));
 rnew:=0;
 j:=0;
 for i:=1 to n do
  if acceptedCode.text[i]='1' then
  begin
   azDropDown.Items.Add('a*'+intToStr(j)+' = '+intToStr(i-1));
   inc(j);
   rnew:=rnew+i-1;
  end;
 rnew:=rnew mod n;
 R2Edit.Text:=IntToBinLowByte(rnew,l);



 rDiff:=0;
 rIdx:=0;
 for i:=1 to l do
  begin
   if R2Edit.Text[i]<>AcceptedCode.Text[n+i] then
    begin
     inc(rDiff);
     rIdx:=i;
    end;
  end;
 //r=0; correct
 if (mDiff=0) and (rDiff=0) then
  begin
   rSmallEdit.text:='0';
   resultEdit.text:=copy(acceptedCode.text,1,n);
   exit;
  end;


 //calc ROld
 rOld:=0;
 j:=1;
 for i:=1 to l do
  begin
   rOld:=Rold+j*(ord(AcceptedCode.text[n+l-i+1])-ord('0'));
   j:=j*2;
  end;

 if (abs(mDiff)=1) then
  begin
   //calc j
   if mDiff<0 then
    begin
     tmp:=0;
     k:=0;
     for i:=1 to n do
      if acceptedCode.text[i]='1' then
       begin
        tmp:=tmp+i-1;
        inc(k);
        if k>=m-1 then
         break;
       end;
     tmp:=tmp mod n;
     j:=((ROld-tmp)+n*10) mod n;
    end
   else
    begin
     tmp:=0;
     k:=0;
     for i:=1 to n do
      if acceptedCode.text[i]='1' then
       begin
        tmp:=tmp+i-1;
        inc(k);
        if k>=m+1 then
         break;
       end;
     tmp:=tmp mod n;
     j:=((tmp-ROld)+n*10) mod n;
    end;
   s:=acceptedCode.text;
   s[j+1]:=chr(1-(ord(s[j+1])-ord('0'))+ord('0'));


   //check
   tmp:=0;
   for i:=1 to length(s) do
    if s[i]='1' then
     tmp:=tmp+i-1;
   tmp:=tmp mod n;
   if tmp=Rold then
    begin
     JEdit.text:=intTostr(j);
     resultEdit.text:=copy(s,1,n);
     rSmallEdit.Text:='1';
     exit;
    end;
  end;


  if (mdiff=0) and (rDiff<>0) then
   begin
    //����������� ������ � R
    if rDiff=1 then
     begin
       JEdit.text:=intTostr(rIdx+n-1);
       resultEdit.text:=copy(acceptedCode.text,1,n);
       rSmallEdit.Text:='1';
       exit;
     end
    else
     begin
      resultEdit.TExt:='������������ ������ � �������������� �����';
      rSmallEdit.Text:='2';
      exit;
     end;
   end;

   
  if (abs(mdiff)=1) and (rDiff<>0) then
   begin
     //calc j
     if mDiff<0 then
      begin
       tmp:=0;
       k:=0;
       for i:=1 to n do
        if acceptedCode.text[i]='1' then
         begin
          tmp:=tmp+i-1;
          inc(k);
          if k>=m-1 then
           break;
         end;
       tmp:=tmp mod n;
       j:=((ROld-tmp)+n*10) mod n;
      end
     else
      begin
       tmp:=0;
       k:=0;
       for i:=1 to n do
        if acceptedCode.text[i]='1' then
         begin
          tmp:=tmp+i-1;
          inc(k);
          if k>=m+1 then
           break;
         end;
       tmp:=tmp mod n;
       j:=((tmp-ROld)+n*10) mod n;
      end;
     s:=acceptedCode.text;
     s[j+1]:=chr(1-(ord(s[j+1])-ord('0'))+ord('0'));


     //check
     {tmp:=0;
     for i:=1 to length(s) do
      if s[i]='1' then
       tmp:=tmp+i-1;
     tmp:=tmp mod n;
     if tmp=Rold then
      begin
       JEdit.text:=intTostr(j);
       resultEdit.text:=copy(s,1,n);
       rSmallEdit.Text:='1';
       exit;
      end;   }
     tmp:=0;
     for i:=1 to n do
      if s[i]='1' then
       tmp:=tmp+1;
     if tmp=m then
      begin
       JEdit.text:=intTostr(j);
       resultEdit.text:=copy(s,1,n);
       rSmallEdit.Text:='1';
       exit;
      end
     else
      begin
       rSmallEdit.text:='2';
       resultEdit.text:='���� �������������� � ���� ����������� �������';
       exit;
      end;
   end;

  if abs(mdiff)>1 then
   begin
    resultEdit.tExt:='������������ ������ � �������������� �����';
    rSmallEdit.text:='2';
   end;

  for i:=1 to 1000 do
  begin
     a[i]:=123142124;
  end;

end;

end.
