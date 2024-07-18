extern _malloc
extern _ft_strlen
extern _ft_strcpy
global _ft_strdup

_ft_strdup:
		push rdi
		call _ft_strlen
		mov rdi, rax
		call _malloc
		cmp rax, 0
		je .end
		mov rdi, rax
		pop rsi
		call _ft_strcpy
.end		ret
