SECTION .text

global _ft_isprint

_ft_isprint :
	cmp			rsi, 33
	jle			exit
	cmp			rsi, 127
	jge			exit
	mov 		rax, 1
	ret

exit :
	mov 		rax, 0
	ret
