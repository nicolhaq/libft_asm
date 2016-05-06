SECTION .text

global _ft_toupper

_ft_toupper :
	cmp			edi, 97
	jl			exit
	cmp			edi, 122
	jg			exit
	sub			edi, 32
exit :
	mov 		eax, edi
	ret
