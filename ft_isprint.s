SECTION .text

global _ft_isprint

_ft_isprint :
	cmp			rsi, 33
	jle			exit
	cmp			rsi, 127
	jge			exit
	move byte	rax, 1
	ret

exit :
	move byte	rax, 0
	ret
