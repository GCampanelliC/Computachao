#Programa que recebe 2 dimensões e calcula a área
.data
msg1: .asciiz "Entre com a largura\n"
msg2: .asciiz "Entre com o comprimento\n"
resultado: .asciiz "A quantidade de m² que a área mede é:\n"
.text
	li $v0,4
	la $a0, msg1
	syscall
	
	li $v0,5
	syscall
	move $t0,$v0
	 
	
	li $v0,4
	la $a0, msg2
	syscall	

	li $v0,5
	syscall 
	move $t1,$v0
	
	
	mul $t2,$t0,$t1
	
	li $v0,4
	la $a0, resultado
	syscall 
	
	li $v0, 1
	la $a0,($t2)
	syscall 
	
li $v0, 10
syscall
	
