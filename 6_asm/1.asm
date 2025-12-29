global _start ; чтобы видеть снаружи

section .text ; секция с кодом
_start:         ; точка входа
    mov rax, 60 ; syscall: exit
    mov rdi, 22 ; статус выхода
    syscall     ; вызов ядра

; Запуск и сборка:
; nasm -f elf64 1.asm -o 1.o
; ld -o 1 1.o
; ./1
; echo $?