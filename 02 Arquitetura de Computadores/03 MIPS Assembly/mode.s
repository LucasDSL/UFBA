	.data
# nao modifique nada abaixo!
LIST1:	
	.word 2 3 3 4 5 6 7 7 7 8
LIST2:	
	.word 1 3 4 4 5 6 6 9 9 9
LIST3:
	.word 35
received1:   
	.asciiz "LIST1: recebeu "
received2:   
	.asciiz "LIST2: recebeu "
received3:
	.asciiz "LIST3: recebeu "
newline: 
	.asciiz "\n"
expected:
	.asciiz ", experado "
	
	.text

printLoop:
	# test case 1
	la $a0 LIST1 # get address of the array
	li $a1 10 # length of list
	jal mode
	move $s0, $v0
	la $a0 received1
	la $v0 4
	syscall # PRINT "LIST1: received "
	move $a0 $s0
	li $v0 1
	syscall # PRINT value returned from call to mode
	la $a0 expected
	li $v0 4
	syscall # PRINT ", expected "
	li $a0 7
	li $v0 1
	syscall # PRINT expected result
	la $a0 newline
	li $v0 4
	syscall # PRINT newline
	
	# test case 2
	la $a0 LIST2 # get address of the array
	li $a1 10 # length of list
	jal mode
	move $s0, $v0
	la $a0 received2
	la $v0 4
	syscall # PRINT "LIST2: received "
	move $a0 $s0
	li $v0 1
	syscall # PRINT value returned from call to mode
	la $a0 expected
	li $v0 4
	syscall # PRINT ", expected "
	li $a0 9
	li $v0 1
	syscall # PRINT expected result
	la $a0 newline
	li $v0 4
	syscall # PRINT newline

	# test case 3
	la $a0 LIST3 # get address of the array
	li $a1 1 # length of list
	jal mode
	move $s0, $v0
	la $a0 received3
	la $v0 4
	syscall # PRINT "LIST3: received "
	move $a0 $s0
	li $v0 1
	syscall # PRINT value returned from call to mode
	la $a0 expected
	li $v0 4
	syscall # PRINT ", expected "
	li $a0 35
	li $v0 1
	syscall # PRINT expected result

	li $v0 10
	syscall # EXIT
	
mode: # mode($a0,$a1)
        #
	    # ****** SEU CODIGO COMECA AQUI ******
	    #
        # $a0 eh o endereco da lista, e $a1 eh o tamanho.
        #
        # Tente nao desviar muito da versao original em C.
        #
        # NAO acessem os valores nos registradores $s, LIST, etc (descritos acima).
        # Voce tera o trabalho zerado caso altere estes registradores!
        #
        # Este problema pode ser resolvido apenas usando os registradores $a0-$a3,$t0-$t?,
        # $v0,$ra.

	lw $t1 0($a0) # currNum = arr[0]
        li $t2 1 # count = 1
        move $v0 $t1 # mode = currNum
        li $t3 0 # modeCount = 0
        li $t4 1 # inicializa i to 1
        
        # Comece teu codigo aqui, comecando pelo loop for conforme descrito no codigo em C
loop: 
        # loading len-1 on register $t7
        move $t7 $a1
        addi $t7 $t7 -1

    	# increases the addres of pointer of list 
    	addi $a0 $a0 4

    	# load the addres of list equal to value of i
    	lw $t5 0($a0)

    	# first if inside the loop 
    	beq $t5 $t1 count_increment

    	# second if inside the loop 
    	second_part:
        	beq $t4 $t7 third_if
        	bne $t5 $t1 third_if
        	j increases_i
        # Go inside the second if after third if third not true
    	rest_second_part:
        	lw $t1 0($a0)
        	li $t2 1
        	j increases_i
    
    	#end the loop 
    	beq $t4 $a1 end 

    	# result of first if inside the loop
    	count_increment: 
            	addi $t2 $t2 1
            	j second_part

    	#result of third_if
    	result_tif:
        	move $t3 $t2
        	move $v0 $t1
        	j rest_second_part

    	third_if:
        	slt $t6 $t3 $t2 
        	bne $t6 $0 result_tif
        	j rest_second_part
    
    	increases_i:
        	addi $t4 $t4 1 
        	addi $t7 $t7 1
        	slt $t8 $t4 $t7
        	beq $t8 $0 end
        	j loop 

    	#ending the loop 
    	end: 

return:
	jr $ra # return
