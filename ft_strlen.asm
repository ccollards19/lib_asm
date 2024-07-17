global _ft_strlen

; _ft_strlen:
; 	xor rax, rax ; set search value to 0
; 	mov rdx, rdi ; keep the address of the string in another register
; 	xor rcx, rcx ; set the counter to 0
; 	dec rcx ; set the counter to uint64 max because overflow
; 	repne scasb ; repeat while not null
; 	mov rax, rdi ; address of the last byte 
; 	sub rax, rdx ; substract the address of the first byte to get the length
; 	ret
_ft_strlen:

  push  rbx                 ; save any registers that 
  push  rcx                 ; we will trash in here

  mov   rbx, rdi            ; rbx = rdi

  xor   al, al              ; the byte that the scan will
                            ; compare to is zero

  mov   rcx, 0xffffffff     ; the maximum number of bytes
                            ; i'm assuming any string will
                            ; have is 4gb

  repne scasb               ; while [rdi] != al, keep scanning

  sub   rdi, rbx            ; length = dist2 - dist1
  mov   rax, rdi            ; rax now holds our length

  pop   rcx                 ; restore the saved registers
  pop   rbx

  ret
