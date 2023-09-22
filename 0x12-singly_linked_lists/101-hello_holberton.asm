section .data
    hello_fmt db "Hello, Holberton",10,0  ; Format string for printf

section .text
    global main

extern printf

main:
    push rbp              ; Save base pointer
    mov rdi, hello_fmt    ; Load format string address into rdi
    call printf           ; Call printf function
    pop rbp               ; Restore base pointer

    ; Exit the program
    mov rax, 60           ; syscall: exit
    xor rdi, rdi          ; status: 0
    syscall

