extern printf

section .text
global main

main:
    mov rdi, fmt
    mov rsi, msg
    call printf

    xor rax, rax ; Set rax to 0 using XOR (small optimization)
    ret

section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

