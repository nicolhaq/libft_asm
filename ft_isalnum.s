SECTION .text

global ft_isalnum

ft_isalnum:
	cmp			edi, 48
	jl			exit
	cmp			edi, 57
	jg			ft_alpha
	mov 		eax, 1
	ret

ft_alpha:
	cmp			edi, 65
	jl			exit
	cmp			edi, 90
	jg			ft_Alpha
	mov 		eax, 1
	ret

ft_Alpha:
	cmp			edi, 97
	jl			exit
	cmp			edi, 122
	jg			exit
	mov 		eax, 1
	ret

exit:
	mov 		eax, 0
	ret
