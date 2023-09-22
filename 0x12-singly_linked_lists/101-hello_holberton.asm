section .data
	format_hello db "Hello, Holberton",10,0

section .text
	global main

	extern printf

main:
	push rdi
	push rsi
	lea rdi, [rel format_hello]
	xor rax, rax
	call printf
	pop rsi
	pop rdi

	mov rax, 60
	xor rdi, rdi
	syscall
