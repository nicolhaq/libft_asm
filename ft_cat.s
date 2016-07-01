%define		BUF		256

section .bss
buf		resb	BUF

section .text
global ft_cat

ft_cat:
	push	rdi
	push	rsi
	push	rdx
	cmp		rdi, 0
	jl		end

cat:
	lea		rsi, [rel buf]
	mov		edx, BUF
	mov		rax, READ
	syscall
	jc		end
	cmp		eax, 0
	jle		end
	push	rdi
	mov 	edi, 1
	mov		rdx, rax
	mov		rax, WRITE
	syscall
	pop		rdi
	cmp		eax, 0
	jl		end
	jmp		cat

end:

	pop		rdx
	pop		rsi
	pop		rdx
	ret
