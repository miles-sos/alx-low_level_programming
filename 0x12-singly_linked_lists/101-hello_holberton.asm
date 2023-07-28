section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

section .text
	extern printf	; the external function
	global main	; entry point of program

main:
	push    rbp	; pushes rbp onto the stack
	mov rdi, fmt	; moves fmt addr to rdi register
	mov rsi, msg	; moves msg addr to rsi register
	xor rax, rax   ; Clear RAX register for proper return value
	call printf	; calls the prinf function
	pop rbp		; removes rbp val from stack
	xor rax, rax   ; Clear RAX again before returning
	ret

