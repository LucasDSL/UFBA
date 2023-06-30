section .bss
    name resb 6
    semester resb 5
section .data
    materia: db  "Programação de Software Básico, "
    message: db "seja bem vindo ao semestre "
section .text
    global _start

_start:
    mov rax, 0 ; read name
    mov rdi, 0
    mov rsi, name
    mov rdx, 6
    syscall
    mov rax, 1 ; write materia
    mov rdi, 1
    mov rsi, materia
    mov rdx, 35
    syscall
    mov rax, 1 ; write name
    mov rdi, 1
    mov rsi, name
    mov rdx, 13
    syscall
    mov rax, 0 ; read semester
    mov rdi, 0
    mov rsi, semester
    mov rdx, 5
    syscall
    mov rax, 1 ; write message 
    mov rdi, 1
    mov rsi, message
    mov rdx, 27
    syscall
    mov rax, 1 ; write semester
    mov rdi, 1
    mov rsi, semester
    mov rdx, 13
    syscall
    mov rax, 60
    mov rdi, 0
    syscall