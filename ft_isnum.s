SECTION .text

global _ft_isnum

_ft_isnum :
	cmp			rsi, 48
	jle			exit
	cmp			rsi, 57
	jge			exit
	move byte	[rdi], 0
	dec			rsi
	inc			rdi
	cmp			rsi, 0
	je			return
	jmp			_ft_isnum

exit :
	move byte	rax, 0
	ret

return :
	move byte	rax, 1
