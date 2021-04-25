# -*- coding: utf-8 -*-
print ("Héllo World")

#Comentário aqui 
# É nois

"""Comentários de muitas linhas
N mesmo
é sim 
""" 

#Operações matemáticas --------------------------------------------------------

print (2 + 2)
print (4 - 4)
print (8 / 4)
print (3 * 2)

print ( 2 ** 3) #Exponenciação
print ( 10 % 3 )# Resto 



#Tipos de Variáveis --------------------------------------------------------
mensagem = ("EAE MERMAO")
print (mensagem)

n1 = 2
n2 = 1.4
n3 = ("String")
n4 = True 

print (n1)
print (n2)
print (n3)
print (n4)

#Operadores Lógicos e relacionais --------------------------------------------------------

x = 4
y = 4
z = 5

print(x==y)# x é igual a y?

s = x + y
print(s>=9)

print(x==y and x==z)
print(x==y or x==z)

print(x==y or x==z and s==y)

# Estrutura Condicional --------------------------------------------------------
print ("______________________________________________________________\n")
n1 = 1
n2 = 2


if n1 > n2:
    print("n1 é maior que n2")

if n1 < n2:
    print("n2 é maior que n1")

if n1 == n2:
    print("n1 é igual n2")
else:
     print("n1 não é igual n2")


if n1 > n2:
    print("n1 é maior que n2")
#else if
elif x==y:
        print("São iguais")
else:
     print("n1 não é maior que n2")

#Comando While -------------------------------------------------------

x=1

while x < 10:
    print(x)
    x += 1

print("\n")
#Comando For-------------------------------------------------------

lista = [1,2,3,4,5]
lista2 = ["ola","voce", "!"]
lista3 = [0,"oi","bolacha", 2.33,4,True]

for i in lista3:
    print(i)

#For com Range-------------------------------------------------------
print("\n")

for i in range(11):
    print(i)

for i in range(10,20):#de 10 até 19
    print(i)

for i in range(11,33,3):#imprimir de 11 a 32 de 3 em 3
    print(i)


print("\n")
print("\n")

#Objetos-------------------------------------------------------
#objeto.atributo --- Objetos tem atributos
#objeto.método( ) --- ao qual se podem fazer açoes nos métodos

#Strings-------------------------------------------------------

a = "Gabriel"
b = "Maria"
concatenar = a +" " + b + "\n"#Concatenação 

print(concatenar)

#Tamanho
tam = len (concatenar) #conta espaços

print(tam)

#Exibir posição
print(a[0])
print(a[1])
print(a[2])
print(a[3])
print(a[4])
print(a[5])
print(a[6])

# posso imprimir um pedaço da String
print(concatenar[0:]) # valor de inicio/ intervalo/valor final

#Métodos-------------------------------------------------------
print("\n")
#Maiusculo e minusculo-------------------------------------------------------

print(concatenar.lower()) # Minusculo
print(concatenar.upper()) #Maiusculo

a = a.upper()
print(a)

#Remoção de caractere -------------------------------------------------------
print(concatenar.strip())
print("\n")
# Converte uma sequencia em lista-------------------------------------------------------

mstr = " O rato roeu a roupa do rei de Roma"
mlis = mstr.split(" ")#pode quebrar uma letra 
print(mlis)

#case sensitive - sensivel a maiusculo ou minusculo

#Busca Substring-------------------------------------------------------

busca = mstr.find("rei")
print(busca)

print(mstr[busca:])

#Substitui partes de uma String -------------------------------------------------------

minhas = "voce chama em!"
minhas=minhas.replace("chama","chamou")
print(minhas)

#Funções -------------------------------------------------------
print("\n")
def soma(x,y):
        return (x+y)

def multiplicacao(x,y):
        return (x*y)

s = soma(2,4)
m = multiplicacao (3, 4)

print(soma(x,y))


