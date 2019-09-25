%progenitor(pai, filho).
progenitor(maria, jose).
progenitor(joao, jose).
progenitor(jose, julia).
progenitor(jose, iris).
progenitor(joao, ana).

%homem(nome).
homem(joao).
homem(jose).

%mulher(nome).
mulher(maria).
mulher(ana).
mulher(julia).
mulher(iris).

%pai(pai, filho).
pai(A, B) :- progenitor(A, B), homem(A).

%mae(mae, filho).
mae(A, B) :- progenitor(A, B), mulher(A).

%avo(avo, neto).
avo(A, B) :- progenitor(A, X), progenitor(X, B).

%irma(irma, irma/irmao).
irma(A, B) :- progenitor(X, A), progenitor(X, B), mulher(A), A \= B.

%caso base
antepassado(X,Y) :- progenitor(X,Y).

%caso recursivo
antepassado(X,Y) :- progenitor(X,Z), antepassado(Z,Y).

