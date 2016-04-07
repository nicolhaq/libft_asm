SECTION .text

global _ft_tolower

_ft_tolower :
	cmp			rsi, 65
	jle			exit
	cmp			rsi, 90
	jge			exit
	add			rsi, 32
exit :
	mov 		rax, rsi
	ret
