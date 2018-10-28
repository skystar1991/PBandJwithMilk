/* example from the slide 
mother_child(trude, sally).
father_child(tom, sally).
father_child(tom, erica).
father_child(mike, tom).

sibling(X,Y):-parent_child(Z,X), parent_child(Z,Y).

parent_child(X,Y):-father_child(X,Y).
parent_child(X,Y):-mother_child(X,Y).


path(A,B,Path):- travel(A,B,[A],Q), reverse(Q,Path).
travel(A,B,P,[B|P]):- connect(A,B).
travel(A,B,Visited,Path):-connect(A,C),
	C\==B,
	\+member(C,Visited),
	travel(C,B,[C|Visited],Path).

edge(1,2).
edge(1,4).
edge(1,3).
edge(2,3).
edge(2,5).
edge(3,4).
edge(3,5).
edge(4,5).
connect(X,Y):- edge(X,Y).
connect(X,Y):- edge(Y,X).
*/

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
/* first, odd multiple of 3  */

oddMultOf3(X):- integer(X) -> 0 is X mod 3; write('ERROR: The given parameter is not an integer.').


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
/* second, list product  */

list_prod([],0).
list_prod([H|T],Y):- prod(H, T, Y).
prod(P,[],P).
prod(Head, [H|T], P):- prod(H,T, Prod), P is Prod*Head.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
/* third, segregate */

/* example:
?- segregate([8,7,6,5,4,3], Even, Odd). 
Even = [8,6,4] 
Odd = [7,5,3]   
*/

segregate([],[],[]).
segregate([H|T], Even, Odd):-
	H mod 2 =:= 0 -> 
	Even = [H|Tail], segregate(T,Tail,Odd);
	H mod 2 =:= 1 -> 
	Odd = [H|Tail], segregate(T,Even,Tail).


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
/* fourth, route */

/* example: 
?- route(fresno, atlanta, X).
X = [fresno, seattle, omaha, atlanta] ;
X = [fresno, albany, seattle, omaha, atlanta] ;
X = [fresno, albany, dallas, seattle, omaha, atlanta] ;
false.
*/

route(From, To, Route):- 
	p(From, To, [From], Q), reverse(Q, Route).
	
p(From, To, P, [To|P]):- connected(From, To).

p(From, To, Visited, Route):-
	connected(From, Temp),
	Temp \== To,
	\+member(Temp, Visited),
	p(Temp, To, [Temp|Visited], Route).

edge(albany, dallas).
edge(albany, seattle).
edge(atlanta, dallas).
edge(atlanta, albany).
edge(atlanta, boston).
edge(dallas, albany).
edge(dallas, seattle).
edge(fresno, seattle).
edge(fresno, albany).
edge(fresno, boston).
edge(omaha, albany).
edge(omaha, atlanta).
edge(seattle, omaha).
edge(seattle, dallas).

connected(X,Y):- edge(X,Y).


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
/* fifth, genealogy  */

:- discontiguous male/1, female/1, parent/2.
/*
male(adam).
male(bob).
male(brett).
male(charles).
male(chris).
male(clay).
female(ava).
female(barbara).
female(betty).
female(colette).
female(carrie).
parent(adam,bob).
parent(adam,barbara).
parent(ava,bob).
parent(ava,barbara).
parent(bob,clay).
parent(barbara,colette).
*/

mother(X,Y):- female(X), parent(X,Y).		 			% X is the mother of Y.
father(X,Y):- male(X), parent(X,Y). 					% X is the father of Y.
child(X,Y):- parent(Y,X). 						% X is the child of Y.
sibling(X,Y):- father(F,X), father(F,Y), 
		mother(M,X), mother(M,Y), X\==Y, X@<Y. 			% X and Y are sibling.
grandparent(X,Y):- parent(X,A), parent(A,Y). 				% X is the grandparent of Y.
grandmother(X,Y):- female(X), parent(X,A), parent(A,Y). 		% X is the grandmother of Y.
grandfather(X,Y):- male(X), parent(X,A), parent(A,Y). 			% X is the grandfather of Y.
grandchild(X,Y):- child(X,A), child(A,Y).  				% X is the grandchild of Y.
grandson(X,Y):- male(X), child(X,A), child(A,Y). 			% X is the grandson of Y.
granddaughter(X,Y):- female(X), child(X,A), child(A,Y).			% X is the granddaughter of Y.


