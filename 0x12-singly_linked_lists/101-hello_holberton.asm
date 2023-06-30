section .data
    format db 'Hello, Holberton', 0
    nl db 10, 0

section .text
    extern printf

global main
main:
    ; Prepare arguments for printf
    mov rdi, format
    xor rax, rax   ; Clear RAX register (first parameter for printf)

    ; Call printf
    call printf

    ; Print new line
    mov rdi, nl
    xor rax, rax
    call printf

    ; Exit program
    mov eax, 60
    xor edi, edi
    syscall
