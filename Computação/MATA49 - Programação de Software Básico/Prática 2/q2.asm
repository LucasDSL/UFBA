section .bss
    letter resb 1
section .text
    global _start

_start:
    mov rax, 0 ; read letter
    mov rdi, 0
    mov rsi, letter
    mov rdx, 1
    syscall
    mov rax, [letter] ;transform letter to UPPER
    add rax, -32
    mov [letter], rax
    
    mov rax, 1
    mov rdi, 1
    mov rsi, letter
    mov rdx, 1
    syscall 
    
    mov rax, 60
    mov rdi, 0
    syscall