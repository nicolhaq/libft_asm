SECTION .text
global ft_memcpy

ft_memcpy:
	push		rdi			;void *restricted dest
	push		rsi			;void *restricted src
	push		rdx			;size_t n
	push		rcx
	cld						; go forward
	mov			rcx, rdx	;len for rep
	rep			movsb		;rsi ->rdi
	pop			rcx
	pop 		rdx
	pop 		rsi
	pop			rdi
	mov			rax, rdi
	ret
