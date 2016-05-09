SECTION .text

global ft_isascii

ft_isascii :
	cmp			edi, 0
	jl			exit
	cmp			edi, 127
	jg			exit
	mov 		eax, 1
	ret

exit :
	mov 		eax, 0
	ret
