section .text
global _start
_start:
    mov al, 0b10011001
    rol al, 3
    ; result now in al
    movzx eax, al
    ; syscall exit
    mov ebx, eax
    mov eax, 1
    int 0x80
