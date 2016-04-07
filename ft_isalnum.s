SECTION .text

global _ft_isalnum

_ft_isalnum :
	cmp			rsi, 48
	jle			exit
	cmp			rsi, 57
	jge			_ft_alpha
	mov 		rax, 1
	ret

_ft_alpha :
	cmp			rsi, 65
	jle			exit
	cmp			rsi, 90
	jge			_ft_Alpha
	mov 		rax, 1
	ret

_ft_Alpha :
	cmp			rsi, 97
	jle			exit
	cmp			rsi, 122
	jge			exit
	mov 		rax, 1
	ret

exit :
	mov 		rax, 0
	ret
