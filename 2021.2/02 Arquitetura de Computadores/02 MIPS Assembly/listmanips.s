.data
start_msg:	.asciiz "Lista antes: "
end_msg:	.asciiz "Lista depois: "

.text
main:	jal	create_default_list
	addu	$s0, $v0, $0	# $v0 = $s0 eh a cabeca da lista

	#imprime "lista antes: "
	la	$a0, start_msg
	li	$v0, 4
	syscall

	#imprime a lista
	addu	$a0, $s0, $0
	jal	print_list

	# imprime newline
	jal	print_newline

	# chama funcao map
	addu	$a0, $s0, $0	# carrega endereco do 1o no em $a0
	# carrega o endereco da funcao em $a1 (veja funcao MIPS la)
	### SEU CODIGO AQUI ###
	jal	map

	# imprime "lista depois: "
	la	$a0, end_msg
	li	$v0, 4
	syscall

	# imprime a lista
	addu	$a0, $s0, $0
	jal	print_list

	li	$v0, 10
	syscall

map:
	addiu	$sp, $sp, -12
	sw	$ra, 0($sp)
	sw	$s1, 4($sp)
	sw	$s0, 8($sp)

	beq	$a0, $0, done	# se receber ponteiro nulo, termina

	addu	$s0, $a0, $0	# salva endereco do no em $s0
	addu	$s1, $a1, $0	# salva endereco da funcao em $s1

	# lembra que cada no possui 8 bytes: 4 para o valor e 4 para o ponteiro next
	# carrega valor do no corrente em $a0
	### SEU CODIGO AQUI ###
	# chama a funcao para aquele valor.
	### SEU CODIGO AQUI ###
	# armazena o valor retornado de volta pro no
	### SEU CODIGO AQUI ###
	# carrega o endereco do proximo no em $a0
	### SEU CODIGO AQUI ###
	# coloca o endereco da funcao de volta em $a1 para preparar a chamada recursiva
	### SEU CODIGO AQUI ###
	#recursao
	### SEU CODIGO AQUI ###

done:
	lw	$s0, 8($sp)
	lw	$s1, 4($sp)
	lw	$ra, 0($sp)
	addiu	$sp, $sp, 12
	jr	$ra

square:
	mul	$v0 ,$a0, $a0
	jr	$ra

create_default_list:
	addiu	$sp, $sp, -4
	sw	$ra, 0($sp)
	li	$s0, 0		# ponteiro para ultimo no percorrido
	li	$s1, 0		# numero de nos percorridos
loop:	#do...
	li	$a0, 8
	jal	malloc		# pega memoria para o proximo no
	sw	$s1, 0($v0)	# node->value = i
	sw	$s0, 4($v0)	# node->next = last
	addu	$s0, $0, $v0	# last = node
	addiu	$s1, $s1, 1	# i++
	bne	$s1, 10, loop	# ... while i!= 10
	lw	$ra, 0($sp)
	addiu	$sp, $sp, 4
	jr	$ra

print_list:
	bne	$a0, $0, printMeAndRecurse
	jr	$ra 		# nada pra imprimir
printMeAndRecurse:
	addu	$t0, $a0, $0	# t0 pega o endereco do corrente
	lw	$a0, 0($t0)	# a0 pega o valor do no corrente
	li	$v0, 1		# prepara para imprimir um inteiro
	syscall
	li	$a0, ' '	# a0 pega endereco da string contendo espaco
	li	$v0, 11		# prepara para imprimir um inteiro
	syscall
	lw	$a0, 4($t0)	# a0 pega endereco do proximo no
	j	print_list	# chamada recursiva. nao precisa usar jal porque ja temos pra onde voltar em $ra

print_newline:
	li	$a0, '\n'
	li	$v0, 11
	syscall
	jr	$ra

malloc:
	li	$v0, 9
	syscall
	jr	$ra
