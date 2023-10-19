section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, hello     ; First argument is address of string
    xor rax, rax       ; rax must be 0 for variable arguments

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60      ; System call number for exit
    xor edi, edi       ; Exit code
    syscall
