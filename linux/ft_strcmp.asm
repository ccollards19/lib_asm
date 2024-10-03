global _ft_strcmp

_ft_strcmp:
	push rbx
    .loop:
        mov al, [rdi]         
        mov bl, [rsi]         
        cmp al, bl 
        jne .not_equal        
       	cmp al, 0          
        je .equal             
        inc rdi               
        inc rsi               
        jmp .loop             

    .not_equal:
        sub al, bl            
        movzx rax, al         
	pop rbx
        ret                   

    .equal:
        xor rax, rax          
	pop rbx
        ret                   
