SECTION .text

global	ft_bzero

ft_bzero :
	cmp			rsi, 0
	je			exit
	mov	byte	[rdi], 0
	dec 		rsi
	inc			rdi
	jmp			ft_bzero
exit :
	ret
