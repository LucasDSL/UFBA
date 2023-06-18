section .data
    array:	db  34,45,56,67,75,9,0
    var: db 2
    msg db "Valor encontrado no vetor" 
    lenmsg equ $-msg 

section .text
    global _start 

findval: 
    mov rax, 0
    mov bl, [var]

    .loop: 
        cmp byte [array + rax], 0
        je end 

        cmp byte [array + rax], bl 
        je found

        inc rax
        jmp .loop
    
    found:
        mov rax, 1
        mov rdi, 1
        mov rsi, msg 
        mov rdx, lenmsg
        syscall 
        ret
    
    end:
        ret

global _start 
_start: 
   call findval