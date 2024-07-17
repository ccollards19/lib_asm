global _main
section .data
	str: db "Type something and I'll repeat it! (max 64 bytes)", 0xA
	STRSIZE: equ 50
	STDIN: equ 0
	STDOUT: equ 1
section .bss
	buf: resb 64
	BUF_SIZE: equ 64
section .text
_main:
	mov rax, 0x02000004
	mov rdi, STDOUT
	mov rsi, str 
	mov rdx, STRSIZE
	syscall
	mov rax, 0x02000003
	mov rdi, STDIN
	mov rsi, buf
	mov rdx, BUF_SIZE
	syscall
	mov rbx, rax
	mov rax, 0x02000004
	mov rdi, STDOUT
	mov rsi, buf
	syscall
	mov rax, 0x02000001
	xor rdi, rdi
	syscall

