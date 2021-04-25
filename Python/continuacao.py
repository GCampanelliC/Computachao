# -*- coding: utf-8 -*-
import random
#Listas -------------------------------------------------------

minha_lista = ["maçã", "morango", "uva"]
minha_lista2 = [1,2,3,4,5]
minha_lista3 = ["Joao", 2,3.89,True]

#por posicao
print(minha_lista[2])

for i in minha_lista:
    print(i)

#tamanho
tam = len(minha_lista2)
print(tam)

#Adicionando elementos na lista
minha_lista.append("Limao")
print(minha_lista)

#Verificar se existe na minha lista

if 3 in minha_lista2:
    print("3 esta na lista")

#remoção do elemento da lista
del minha_lista [2:]
print(minha_lista)

minha_lista4 = []
minha_lista4.append(57)
print(minha_lista4)

#ordenar lista

lista = [7,67,45,3,2,11,78,900,34]

lista =sorted(lista) #retorna uma lista ordenada
lista.sort() #ordena a lista

print(lista)


#Descrescente

lista.sort(reverse=True)
print(lista)

#reverter a lista

lista.reverse()
print(lista)

#Aceita string
lista2 = ["bola", "abacate", "dinheiro"]
lista2.sort()
print(lista2)

#Dicionários --------------------------------------------------
dicionario_sites = {"Diego": "diegomariano.com"}
print(dicionario_sites['Diego'])


dicionario_sites = {"Diego": "diegomariano.com", "Google": "google.com", "Udemy": "udemy.com"}
 
for chave in dicionario_sites:
    print(dicionario_sites[chave])

meudic = {"A":"Ameixa", "B":"Bola","C":"Cachorro"}

print(meudic["B"])

#Navegação

for chave in meudic:
    print(chave + ":" + meudic[chave])
#Por itens
for i in meudic.items():
    print(i)
#Por valores
for i in meudic.values():
    print(i)
#Por chaves
for i in meudic.keys():
    print(i)

#Números Aleatórios -------------------------------------------------------------

#import random no ínicio

random.seed(1) #Permanecer o mesmo numero
num = random.randint(0,10)
print(num)

#método Choice

listao = [6,76,66] # Escolhe um desses valores
nume = random.choice(listao)
print(nume) 


#Tratamento de exceções
a=2
b=0

try:
    print(a/b)
except:
    print("Não é possível ter essa divisão")

# PYTHON 2 VS PYTHON 3
"""
Python 2
print "Olá mundo"
Python 3
print("Olá mundo")

No python 2
raw_input( )  -strings
input( )  -valores numéricos

no Phyton 3
Recebendo textos
meu_texto = input("Digite um texto: ")

Recebendo números
numero_inteiro = int(input("Digite um numero inteiro: "))
numero_decimal = float(input("Digite um numero decimal: "))
"""