li $t0, 3 #a
li $t1, 4 #b
li $s0, 0
li $t2, 1

While:
beq $t1,$s0 Exit
mul $t2, $t2, $t0 
addi $s0, $s0, 1
j While

Exit:
