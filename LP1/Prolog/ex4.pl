%Exercicio 4.
nasceu(ana,brasil).
nasceu(yves,fran�a).

idioma(brasil,portugues).
idioma(fran�a,frances).
idioma(inglaterra,ingles).

estudou(ana,frances).
estudou(ana,ingles).
estudou(yves,ingles).

fala(A,C) :- nasceu(A,B), idioma(B,C).
fala(D,E) :- estudou(D,E).
