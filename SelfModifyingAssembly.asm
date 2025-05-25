section .text
global _start
_start:
    jmp short call_here
modify:
    pop esi
    mov byte [esi], 0x90  ; NOP out the first byte of message
    mov edx, 6
    mov ecx, esi
    mov ebx, 1
    mov eax, 4
    int 0x80
    mov eax, 1
    xor ebx, ebx
    int 0x80
call_here:
    call modify
    db 'Hello!', 0xA
