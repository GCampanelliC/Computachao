# -*- coding: utf-8 -*-

#Arquivos ---------------------------------------------------------

#abrir arquivos - open

""""
r - somente leitura
w - escrita ( se ja existe, subscreve)
a - leitura e escrita ( add no final do arquivo)
r+ leitura e escrita
w+ escrita (assim como o w, subscreve)
a+ leitura e escrita ( abre o arquivo para att)
"""

# read() - le 
#arquivo
#readline() - le uma linha
#readlines() - le várias linhas

arquivo = open("arq.txt")

linhas = arquivo.readlines()

for linha in linhas:
    print(linha)

texto = arquivo.read()
print(linhas)
print("\n")
print(texto)

print("\n")

