SECTION .text

global _ft_isprint

_ft_isprint :
	cmp			edi, 32
	jl			exit
	cmp			edi, 126
	jg			exit
	mov 		eax, 1
	ret

exit :
	mov 		eax, 0
	ret
