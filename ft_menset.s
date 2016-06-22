SECTION .text
global ft_memset

ft_memset:
	push		rdi
	push		rsi
	push		rcx
	cld
	mov			rcx, rdx
	mov			al, sil
	rep			stosb
	pop			rcx
	pop			rdi
	mov			rax, rdi
	ret
