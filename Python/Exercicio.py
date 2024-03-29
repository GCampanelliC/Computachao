# -*- coding: utf-8 -*-

"""
1. Faça um programa que receba a idade do usuário e diga se ele é maior ou menor de idade.   
"""
idade = int(input("Digite sua idade: "))
 
if idade >= 18:
    print("Maior de idade")
elif idade < 18:
    print("Menor de idade")

"""
2. Faça um programa que receba duas notas digitadas pelo usuário. Se a nota for maior ou igual a seis, escreva aprovado, senão escreva reprovado.   
"""
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
 
media = (nota1+nota2)/2
 
if media >= 6:
    print("Aprovado")
else:
    print("Reprovado")

"""
3. Escreva um programa que resolva uma equação de segundo grau.   
"""
from math import sqrt
a = int(input("Digite o valor de A: "))
b = int(input("Digite o valor de B: "))
c = int(input("Digite o valor de C: "))
 
delta = b**2 - 4*a*c
raiz_delta = sqrt(delta)
 
if raiz_delta < 0:
    print("Delta negativo")
else:
    x1 = (-b + raiz_delta)/2*a
    x2 = (-b + raiz_delta)/2*a
 
    print("As raízes são", x1, "e", x2)

"""
4. Escreva um programa que ordene uma lista numérica com três elementos.   
"""
lista = [3,2,1]
print(sorted(lista))

"""
5. Escreva um programa que receba dois números e um sinal, e faça a operação matemática definida pelo sinal.   
"""
n1 = int(input("Digite o primeiro número: "))
sinal = input("Digite o sinal: ")
n2 = int(input("Digite o segundo número: "))
 
if sinal == "+":
    op = n1 + n2
 
elif sinal == "-":
    op = n1 - n2
 
elif sinal == "/":
    op = n1 + n2
 
elif sinal == "*":
    op = n1 * n2
 
else:
    print("Sinal inválido.")
 
print(op)