SECTION .text
global ft_memset

ft_memset:
	push		rdi			;void *b
	push		rsi			;int c
	push		rdx			;size_t len
	push		rcx
	cld						; go forward
	mov byte	rax, rsi	; c for stosb
	mov			rcx, rdx	;len for rep
	rep			stosb		;rax ->rdi
	pop			rcx
	pop 		rdx
	pop 		rsi
	pop			rdi
	mov			rax, rdi
	ret
