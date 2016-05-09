SECTION .text

global ft_isdigit

ft_isdigit :
	cmp			edi, 48
	jl			exit
	cmp			edi, 57
	jg			exit
	mov 		eax, 1
	ret

exit :
	mov 		eax, 0
	ret
