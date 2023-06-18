section .data
    array:	db  34,45,56,67,75,9,0
    var: db 2

section .text
    global _start 

findval: 
    mov rdi, 0
    mov bl, [var]

    .loop: 
        cmp byte [array + rdi], 0
        je end 

        cmp byte [array + rdi], bl 
        je howmuchread

        inc rdi
        jmp .loop
    
    howmuchread:
        mov rdx, 8
        mov rax, 60
        syscall 
        ret
    
    end:
        ret

global _start 
_start: 
   call findval