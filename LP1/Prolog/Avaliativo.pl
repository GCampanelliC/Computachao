%QUESTÃO 1
%objetos
livro('Eu Robo').
livro('Sr. dos Aneis').
livro('feliz ano velho').
livro('Winxs').
livro('como treinar o seu dragao').
autor('Cressida Cowell').
autor('Tolkien').
autor('G. Cepeteco').
autor('Labanca Killer').
autor('Isaak Asimov').
autor('M. Paiva').
nacionalidade(brasileira).
nacionalidade(britanica).
nacionalidade(inglesa).
tipo(conto).
tipo(aventura).
tipo(fantasia).
tipo(novela).

%relações

escreveu('Isaak Asimov','Eu Robo').
escreveu('G. Cepeteco','Eu Robo').
escreveu('Labanca Killer','Sr. dos Aneis').
escreveu('Labanca Killer','Winxs').
escreveu('Tolkien','Sr. dos Aneis').
escreveu('M. Paiva','feliz ano velho').
escreveu('Cressida Cowell','como treinar o seu dragao').

nacionalidade('Isaak Asimov',inglesa).
nacionalidade('G. Cepeteco',brasileira).
nacionalidade('Labanca Killer',brasileira).
nacionalidade('Tolkien',britanica).
nacionalidade('M. Paiva',brasileira).
nacionalidade('Cressida Cowell',britanica).

tipo('Eu Robo',conto).
tipo('Winxs',fantasia).
tipo('Sr. dos Aneis',aventura).
tipo('feliz ano velho',conto).
tipo('como treinar o seu dragao',fantasia).

% autores com mesma nacionalidade e que escreveram conto
autores(Y,X) :- nacionalidade(X,Y),escreveu(X,Z),tipo(Z,conto).

livromaisdeum(Y) :- ((autor(X), escreveu(X,Y)), (autor(A), escreveu(A,Y))),A\=X.

autormaisdeum(X) :- ((autor(X), escreveu(X,Y)), (autor(X), escreveu(X,A))),A\=Y.


%QUESTÃO 2

produto([X],X).
produto([X|Y],R) :- produto(Y,SP), R is SP*X.

%QUESTÃO 3

fatorial(0,1).
fatorial(N,F):- N1 is N-1, fatorial(N1,F1), F is N * F1.

listfat(0,[1]).
listfat(X, [A|B]) :- fatorial(X,A), X1 is X-1, listfat(X1,B).



%QUESTÃO 4

alimento(banana).
alimento(arroz).
alimento(feijao).
limpeza(sabao).
limpeza(vassoura).
limpeza(balde).
custo(banana,2).
custo(arroz,4).
custo(feijao,5).
custo(sabao,3).
custo(vassoura,10).
custo(balde,15).

custoT([],0).
custoT([X|Y], K) :- custoT(Y,K1), custo(X,Z), K is K1+Z.

custoA([],0).
custoA([X|Y],R) :- custoA(Y,R1), limpeza(X) , R is R1.
custoA([X|Y],R) :- custoA(Y,R1), alimento(X),custo(X,Z), R is R1+Z.

custoL([],0).
custoL([X|Y],R) :- custoL(Y,R1), alimento(X) , R is R1.
custoL([X|Y],R) :- custoL(Y,R1), limpeza(X),custo(X,Z), R is R1+Z.
