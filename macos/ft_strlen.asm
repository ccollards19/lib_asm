global _ft_strlen

_ft_strlen:
		push rcx ; push rcx onto the stack
		xor rax, rax ; set search value to 0
		xor rcx, rcx ; set the counter to 0
		dec rcx ; set the counter to uint64 max because overflow
		cld ; clear flags
		repne scasb ; repeat while not null
		mov rax, rcx ; move the counter to ret value
		not rax ; flip all the bits to get the length
		dec rax
		pop rcx ; restore rcx
		ret
