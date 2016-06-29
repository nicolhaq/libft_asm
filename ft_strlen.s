section .text
global	ft_strlen

ft_strlen:
	cmp		rdi, 0
	je		eof
	push	rdi
	mov		rcx, 0
	not		rcx
	mov		al, 0
	cld
	repnz	scasb
	not		rcx
	dec		rcx
	pop		rdi
	mov		rax, rcx
	ret
eof:
	mov		rax, -1
	ret
