%exercicio 5.
come(urso, peixe).
come(peixe, peixinho).
come(peixinho, alga).
come(peixe, alga).
come(urso, raposa).
come(veado, grama).
come(peixe, minhoca).
come(urso, guaxinim).
come(raposa, coelho).
come(urso, veado).
come(lince, veado).
come(planta_carnivora, mosca).
come(veado, planta_carnivora).
animal(urso).
animal(peixe).
animal(raposa).
animal(veado).
animal(minhoca).
animal(lince).
animal(coelho).
animal(guaxinim).
animal(mosca).
animal(peixinho).
planta(grama).
planta(alga).
planta(planta_carnivora).
%carnivoro(X) :- come(X,A) , animal(A).

carnivoro(A) :- (animal(A) ; planta(A)) , animal(B) , come(A,B).
herbivoro(A) :- (animal(A) ; planta(A)) , planta(B), come(A,B).
predador(A) :- animal(A) , carnivoro(A).
presa(B) :- (predador(A) , animal(B)) , come(A,B).
ca�ado(X) :- presa(X).
cadeia(A,B) :-  (((predador(A) , presa(B)) , come(A,B))  ; ((predador(B) , presa(A)) , come(B,A))).
