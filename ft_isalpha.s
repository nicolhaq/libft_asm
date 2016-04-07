SECTION .text

global _ft_isalpha

_ft_isalpha :
	cmp			rsi, 65
	jle			exit
	cmp			rsi, 90
	jge			_ft_alpha2
	mov 		rax, 1
	ret

_ft_alpha2 :
	cmp			rsi, 97
	jle			exit
	cmp			rsi, 122
	jge			exit
	mov 		rax, 1
	ret

exit :
	mov 		rax, 0
	ret
