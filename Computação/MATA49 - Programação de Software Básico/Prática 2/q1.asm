section .bss
    letter resb 1 
section .text
    global _start

_start:
    mov rax, 30
    mov rbx, 45
    add rbx, rax
    mov [letter], rbx
    mov rax, 1
    mov rdi, 1
    mov rsi, letter
    mov rdx, 4 ;; print letter K
    syscall
    mov rax, 60
    mov rdi, 0
    syscall