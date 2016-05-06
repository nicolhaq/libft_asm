SECTION .text

global _ft_isalpha

_ft_isalpha :
	cmp			edi, 65
	jl			exit
	cmp			edi, 90
	jg			_ft_alpha2
	mov 		eax, 1
	ret

_ft_alpha2 :
	cmp			edi, 97
	jl			exit
	cmp			edi, 122
	jg			exit
	mov 		eax, 1
	ret

exit :
	mov 		eax, 0
	ret
