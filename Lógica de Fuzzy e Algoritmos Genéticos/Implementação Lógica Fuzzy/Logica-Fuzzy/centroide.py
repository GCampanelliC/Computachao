from ex02 import libera_freio, aperta_freio

def centroide():
    if libera_freio() < aperta_freio():
        num = libera_freio() * 5
        den = (libera_freio())
    else:
        num = aperta_freio() * 5
        den = (aperta_freio())
    valor2 = 1.1

    for i in range(10, 100, 5):
        valor1 = i / 100
        if valor1 >= libera_freio():
                break
        else:
            if valor1 >= aperta_freio():
                break


    for valor in range(10, 101, 5):
        if valor1 <= valor2:
            num = num + (valor * (valor1))
            den = den + valor1
        valor1 = valor1 + 0.05

    centr = num / den
    return centr

