section .bss
    string resb 100

section .text

readStr: 
    mov rax, 0
    mov rdi, 0
    mov rsi, string
    mov rdx, 100
    syscall 
    ret 

strlen: 
    mov rax, 0 ;; using rax to count current index of string 
    mov r10, 0 ;; use r10 to count size of string 
    .loop: 
        cmp byte [rsi+rax], 0
        je .end
        inc rax
        inc r10
        jmp .loop
    .end:
        ret

global _start 

_start: 
    call readStr
    call strlen 
    mov rdi, r10 
    mov rax, 60
    syscall