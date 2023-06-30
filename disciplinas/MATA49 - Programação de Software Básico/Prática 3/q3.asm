section .data 

    espaco db " " 

section .bss 
    nome resb 10 
    last_letra rebs 1 

section .text 

strlen: 
    mov rax, 0
    .loop: 
        cmp byte [rdi + rax], 0
        je .end 

        inc rax
        jmp .loop 
    
    .end: 
        ret 

global _start 
_start: 
    mov rax, 0
    mov rdi, 0
    mov rsi, nome 
    mov rdx, 10
    sycall 

    mov rdi, nome 
    call strlen 
    push rax ; Insere o valor de rax na pilha 

    mov rax, 1
    mov rdi, 1
    mov rsi, nome 
    mov rdx, 1 
    syscall 

    pop rcx ; Coloca o valor que está no topo na pilha em rcx 
    mov rdi, [nome + rcx - 1]
    mov [last_letra], rdi 

    mov rax, 1
    mov rdi, 1
    mov rsi, espaco 
    mov rdx, 1 
    syscall 
    
    mov rax, 1
    mov rdi, 1
    mov rsi, last_letra
    mov rdx, 1 
    syscall 

    mov rdi, 0
    mov rax, 60
    syscall 