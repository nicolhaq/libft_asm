SECTION .text

global _ft_isdigit

_ft_isdigit :
	cmp			rsi, 48
	jle			exit
	cmp			rsi, 57
	jge			exit
	mov 		rax, 1
	ret

exit :
	mov 		rax, 0
	ret
