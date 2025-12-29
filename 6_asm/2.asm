global _start ; чтобы видеть снаружи

section .text ; секция с кодом
_start:         ; точка входа
    mov rax, 10
    add rax, 1
    mov rbx, 30
    sub rbx, rax
    mov rcx, 5
    cmp rcx, rbx
    jne bad
    mov rax, 60
    mov rdi, 0
    syscall
bad:
    mov rax, 60 ; syscall: exit
    mov rdi, 1 ; статус выхода
    syscall     ; вызов ядра

; set $rcx=0x13