# -*- coding:utf-8 -*- #
import pandas as pd

#1) valores 10,20,30 e indices a, b,c

val = [10, 20 ,30]
ind = ['A','B','C']

s1 = pd.Series(data=val, index = ind)
print(s1)
#2) valores 60, 70 e 80 e indices a, b,c

s2 = pd.Series(data=[60,70,80], index = ind)
print(s2)

#3) valores 100,200 300 e indices a, b,c . Utilize dicionário

dic = {'A':100,'B':200,'C':300}
s3 = pd.Series(data = dic)
print(s3)


#Indexação
    #O valor no rótulo B
        print(s1['B'])
    #Os valores dos rótulos A e C
          print(s1[['A', 'C']])
    #Os valores dos rótulos entre A e C (inclusive)
    print(s1['A': 'C'])
    #Os valores no rótulo B em diante
     print(s1['B':])

    #O valor do índice 0
    print(s1[0])

    #Os valores dos índices 0 e 2
    print(s1[[0,2]])

    #Os valores dos índices entre 0 e 1 (inclusive)
    print(s1[0:2])

     #Os valores do índice 1 em diante
     print(s1[1:])


#Operações
    #Some a primeira série definida com a segunda
        serieR = s1 + s2

    

    #Exercício
        sa = pd.Series(data = [89,30,37], index = ['AED1','LP1','LP2'])
        sb = pd.Series(data = [48,90,12], index = ['LP1','LP2','História'])

        sc = sa + sb
        print(sc)