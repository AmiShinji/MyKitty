predicates
	start(integer)
	final(integer)
	perexod(integer, char, integer)
	myread(char)
	step(integer)
clauses
	start(0).
	final(3).
	perexod(0,'0',1).
	perexod(0,'1',1).
	perexod(1,'0',1).
	perexod(1,'1',1).
	perexod(1,'.',2).
	perexod(2,'0',3).
	perexod(2,'1',3).
	perexod(3,'0',3).
	perexod(3,'1',3).
	myread(C):-readChar(C),write(C),C<>'#'.
	step(TS):-myread(C),perexod(TS,C,Tnew),step(Tnew).
	step(TS):-final(TS).
goal
     	start(S),step(S),nl,write("OK"),nl;write("ERROR"),nl.