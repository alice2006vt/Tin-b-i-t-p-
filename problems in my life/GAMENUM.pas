Const fi='GAMENUM.INP';
      fo='GAMENUM.OUT';
var f:text;
    n:longint;
    a:array[1..1000000] of longint;

procedure docfile;
var i :longint;
begin
    assign(f,fi); reset(f);
    readln(f,n);
    for i:=1 to n do
       readln(f,a[i]);
    close(f);
end;


procedure sort(l,r: longint);
      var
         i,j,x,y: longint;
      begin
         i:=l;
         j:=r;
         x:=a[(l+r) div 2];
         repeat
           while a[i]<x do
            inc(i);
           while x<a[j] do
            dec(j);
           if not(i>j) then
             begin
                y:=a[i];
                a[i]:=a[j];
                a[j]:=y;
                inc(i);
                j:=j-1;
             end;
         until i>j;
         if l<j then
           sort(l,j);
         if i<r then
           sort(i,r);
      end;

procedure ghifile;
var i,j:integer; kq,t:longint;
begin
     assign(f,fo); rewrite(f);
     sort(1,n);
     i:=1;
     j:=n;
     while (i < n) do
     begin
       t:=a[i] + a[j];
       if (t =0) then
         begin
            kq := t;
            break;
         end
       else
          if (t > 0) then j := j-1
       else
             if ( t < 0) then
                 i := i + 1;
       if (abs(t) < kq) then
         kq  := abs(t);
       end;
       writeln(f,kq);
       close(f);
end;

BEGIN
 docfile;
 ghifile;
END.
