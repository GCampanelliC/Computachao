.data
prompt1: .asciiz "Digite a operação desejada\n"
opcoes: .asciiz "1 – Soma\n2 – Subtração\n"
soma: .asciiz "Você escolheu 1 – Soma\n"
subtracao: .asciiz "Você escolheu 2 – Subtração\n"
incorreto: .asciiz "Não temos a opção escolhida\n"
.text
	li $v0,4
	la $a0, prompt1
	syscall
	
	li $v0, 4
	la $a0, opcoes
	syscall
	
	li $v0,5
	syscall
	
	beq $v0,1,L1
	beq $v0,2,L2
	j Else
	L1:
	li $v0, 4
	la $a0, soma
	j Exit

	L2:
	li $v0, 4
	la $a0, subtracao
	j Exit

	Else:
	li $v0, 4
	la $a0, incorreto

Exit:
syscall 
li $v0, 10
syscall
