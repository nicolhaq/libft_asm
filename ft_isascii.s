SECTION .text

global _ft_isascii

_ft_isascii :
	cmp			rsi, 0
	jle			exit
	cmp			rsi, 127
	jge			exit
	mov 		rax, 1
	ret

exit :
	mov 		rax, 0
	ret
