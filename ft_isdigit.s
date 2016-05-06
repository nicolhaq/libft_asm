SECTION .text

global _ft_isdigit

_ft_isdigit :
	cmp			edi, 48
	jl			exit
	cmp			edi, 57
	jg			exit
	mov 		eax, 1
	ret

exit :
	mov 		eax, 0
	ret
