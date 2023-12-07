section .data
	hello_msg db "Hello, Holberton", 0

section .text
	global _start

_start:
	; Write the message to stdout
	mov rax, 1        ; syscall number for sys_write
	mov rdi, 1        ; file descriptor 1 (stdout)
	mov rsi, hello_msg  ; pointer to the message
	mov rdx, 13       ; message length
	syscall          ; make syscall

	; Exit the program
	mov rax, 60       ; syscall number for sys_exit
	xor rdi, rdi      ; exit code 0
	syscall          ; make syscall

