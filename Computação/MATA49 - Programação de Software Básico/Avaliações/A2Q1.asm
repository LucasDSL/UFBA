;; Questão 9 
;; Escreva um programa em assembly que receba os
;; três lados do triângulo, por exemplo, l1, l2 e l3. E
;; verifique se o triângulo é equilátero, isósceles, ou
;; escaleno
;; Grupo: Lucas dos Santos Lima (220215279) e Joab Guimarães (218119821)
;; Script para rodar: nasm A2Q1.asm -f elf64 && gcc -no-pie -o cod A2Q1.o && ./cod
section .data
    message_lado1 db "Insira o tamanho do primeiro lado: ",10,0
    message_lado2 db "Insira o tamanho do segundo lado: ",10,0
    message_lado3 db "Insira o tamanho do terceiro lado: ",10,0
    equilatero db "Equilatero",10,0
    escaleno db "Escaleno",10,0
    isosceles db "Isosceles",10,0
    read_int db "%d",0

section .bss 
    lado_1: resb 1
    lado_2: resb 1
    lado_3: resb 1

section .text
    global main
    extern scanf 
    extern printf

print_equilatero: 
    mov rdi, equilatero
    mov rsi, 0
    mov rax, 0
    call printf
    jmp end

print_isosceles: 
    mov rdi, isosceles
    mov rsi, 0
    mov rax, 0
    call printf
    jmp end 

print_escaleno: 
    mov rdi, escaleno
    mov rsi, 0
    mov rax, 0
    call printf
    jmp end

main:   
    mov rbp, rsp
	push rbp

    ; Mensagem amigável pra inserir o primeiro lado 
    mov rdi, message_lado1
    mov rsi, 0
    mov rax, 0
    call printf


    ; Ler o primeiro lado com scanf 
    mov rdi, read_int
	mov rsi, lado_1
    mov rax, 0
    call scanf

    ; Mensagem amigável pra inserir o segundo lado 
    mov rdi, message_lado2
    mov rsi, 0
    mov rax, 0
    call printf

    ; Ler o segundo lado com scanf 
    mov rdi, read_int
	mov rsi, lado_2
    mov rax, 0
    call scanf

    ; Mensagem amigável pra inserir o terceiro lado 
    mov rdi, message_lado3
    mov rsi, 0
    mov rax, 0
    call printf

    ; Ler o terceiro lado com scanf 
    mov rdi, read_int
	mov rsi, lado_3
    mov rax, 0
    call scanf

    ; Verificando se há lados diferentes,
    ; caso sim, verificar as outras combinações de 
    ; lado para ver se ele é isosceles, pois sabe-se que não será equilatero
    mov al, [lado_1]
    cmp al, [lado_2]
    jne check_isosceles

    mov al, [lado_1]
    cmp al, [lado_3]
    jne check_isosceles

    ;; Será equilátero caso l1 == l2 && l1 == l3, que implica l2 == l3
    jmp print_equilatero

;; Verificar se há alguma combinação de lados iguais 
;; para que seja isosceles, se não houver sabe-se que é escaleno
check_isosceles:
    mov al, [lado_1]
    cmp al, [lado_2]
    je print_isosceles

    mov al, [lado_1]
    cmp al, [lado_3]
    je print_isosceles

    mov al, [lado_2]
    cmp al, [lado_3]
    je print_isosceles
    
    jmp print_escaleno

end: 
    mov rax, 60
    mov rdi, 0
    syscall
