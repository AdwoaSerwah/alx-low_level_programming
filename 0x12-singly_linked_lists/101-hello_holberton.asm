section .data
	h_fmt db "Hello, Holberton",10,0

section .text
	global main

extern printf

main:
	push rbp
	mov rdi, h_fmt
	call printf
	pop rbp

	mov rax, 60
	xor rdi, rdi
	syscall
