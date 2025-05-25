section .data
jmp_addr dd start
junk db 0x90, 0x90, 0x90

section .text
global _start
_start:
    mov eax, [jmp_addr]
    jmp eax

start:
    mov eax, 42
    mov ebx, eax
    mov eax, 1
    int 0x80
