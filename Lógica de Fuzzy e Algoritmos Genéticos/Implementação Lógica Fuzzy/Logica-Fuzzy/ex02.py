from ex01 import valor_min_PRESSAO, valor_medio_PRESSAO, valor_max_PRESSAO
from ex01 import valor_min_VELOCIDADE, valor_max_VELOCIDADE

pressao_pedal = float(input('Informe a Pressão no Pedal do freio (0 a 100): '))
velocidade_roda = float(input('Informe a Velocidade da Roda (0 a 100): '))
velocidade_carro = float(input('Informe a Velocidade do Carro (0 a 100): '))
libera_freio = 0.0
aplicar_freio = 0.0


def regra_1():
    aplicar_freio = valor_medio_PRESSAO(pressao_pedal)
    return aplicar_freio

def regra_2():
    aux1 = valor_max_PRESSAO(pressao_pedal)
    aux2 = valor_max_VELOCIDADE(velocidade_carro)
    aux3 = valor_max_VELOCIDADE(velocidade_roda)

    aplicar_freio = min(aux1, aux2, aux3)
    return aplicar_freio

def regra_3():
    aux4 = valor_max_PRESSAO(pressao_pedal)
    aux5 = valor_max_VELOCIDADE(velocidade_carro)
    aux6 = valor_min_VELOCIDADE(velocidade_roda)

    libera_freio = min(aux4, aux5, aux6)
    return libera_freio

def regra_4():
    libera_freio = valor_min_PRESSAO(pressao_pedal)
    return libera_freio

def aperta_freio():
    aplicar_freio = regra_1() + regra_2()
    return aplicar_freio

def libera_freio():
    libera_freio = regra_3() + regra_4()
    return libera_freio