SECTION .text

global	_ft_bezero

_ft_bzero :
	cmp			rsi, 0
	je			exit	
	mov byte	[rdi], 0
	dec 		rsi
	inc			rdi
	jmp			_ft_bzero
exit :
	ret

