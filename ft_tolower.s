SECTION .text

global _ft_tolower

_ft_tolower :
	cmp			edi, 65
	jl			exit
	cmp			edi, 90
	jg			exit
	add			edi, 32
exit :
	mov 		eax, edi
	ret
