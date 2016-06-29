SECTION .text
global	ft_strdup

extern	ft_strlen
extern	ft_memcpy
extern	malloc

ft_strdup:
	push		rdi			;const char *s1
	push		rsi
	push		rdx
	push		r8
	push		r9
	mov			r8, rdi		;save s1
	call		ft_strlen
	add			rax, 1		;add1 for \0
	mov			rdi, rax	;mov len for malloc
	mov			r9,	rax		;save len for memcpy
	call		malloc
	cmp			rax, 0		;test if memalloc ok
	je			end
	mov			rdi, rax	;give return string to memcpy
	mov			rsi, r8		;give s1 to memcpy
	mov			rdx, r9		;give len to memcpy
	call		ft_memcpy

end:
	pop			r9
	pop			r8
	pop			rdx
	pop			rsi
	pop			rdi
	ret
