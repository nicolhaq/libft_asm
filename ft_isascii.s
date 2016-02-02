SECTION .text

global _ft_isascii

_ft_isascii :
	cmp			rsi, 0
	jle			exit
	cmp			rsi, 127
	jge			exit
	move byte	rax, 1
	ret

exit :
	move byte	rax, 0
	ret
