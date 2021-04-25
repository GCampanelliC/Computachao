# -*- coding: utf-8 -*-
from functools import reduce
#enumerate ---------------------------------------------------------
print("Enumerate:\n")
lista = ["abacaxi", "bola", "corda"]

for i in range(len(lista)):
    print(i, lista[i])
print("\n")
#função enumerate usada

for i, nome in enumerate(lista):
    print(i, nome)
print("\n")
#list comprehension ---------------------------------------------------------
print("list comprehension:\n")
x = [1, 2, 3, 4 , 5]
y = []

for i in x:
    y.append(i**2)

print(x)
print(y)
#usando o list comprehension faz isso tudo em uma linha 
print("\n")
yy = [i**2 for i in x]

print(yy)

z = [i for i in x if i%2==1]
print(z)
print("\n")
#map ---------------------------------------------------------
print("map:\n")

def dobro(x):
    return x*2

valor = [1, 2, 3, 4, 5] # em uma lista ele só concatena
print(dobro(valor))

print("\n")
vd = map(dobro, valor)

vd = list(vd)
print(vd)

print("\n")
#reduce - recebe lista e retorna um unico vlaor nesta lista ---------------------------------------------------------
print("reduce:\n")
#precisa importar  = from functools import reduce

def soma(x,y):
    return x+y

listar = [1,3,5,10,20]

soma = reduce(soma, listar)
print(soma)
print("\n")

#zip ---------------------------------------------------------
print("zip:\n")
lista1 = [1,2,3,4,5]
lista2 = ["abacate", "bola", "cachorro","dado", "elefante"]
lista3 = ["R$2,00", "R$2,00","Não tem preco","R$7,00","Não tem preco"]
for num, nome, valor in zip(lista1, lista2, lista3):
    print(num, nome, valor)
print("\n")
#filter ---------------------------------------------------------
print("filter:\n")

def pares(i):
    if i%2 == 0:
        return i

listap = [1,2,3,4,5,6,7,8,9,10]

lista_pares = filter(pares, listap)
print(list(lista_pares))

print("\n")