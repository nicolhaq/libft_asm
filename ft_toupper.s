SECTION .text

global _ft_toupper

_ft_toupper :
	cmp			rsi, 97
	jle			exit
	cmp			rsi, 122
	jge			exit
	add			rsi, 32
exit :
	mov 		rax, rsi
	ret
