global _ft_strcpy

_ft_strcpy:
		push rcx ; push rcx onto the stack
		push rdx
		xor rax, rax ; set search value to 0
		mov rdx, rdi ; keep the address of the string in another register
		mov rdi, rsi ;
		xor rcx, rcx ; set the counter to 0
		dec rcx ; set the counter to uint64 max because overflow
		cld
		repne scasb ; repeat while not null
		not rcx ; flip the bits to get len
		dec rcx
		mov rdi, rdx ; reset rdi
		repe movsb ; copy rcx bytes from rsi to rdi
		mov rax, rdx ; return start address of dest
		pop rdx 
		pop rcx ; restore rcx
		ret
