section .data
	hello_format db "Hello, Holberton",10,0
	hello_args dq 0

section .text
	global main
	extern printf

main:
	mov rdi, hello_format
	mov rax, 0
	call printf
	mov rax, 60
	xor rdi, rdi
	syscall
