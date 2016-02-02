SECTION .text

global _ft_isdigit

_ft_isdigit :
	cmp			rsi, 48
	jle			exit
	cmp			rsi, 57
	jge			exit
	move byte	rax, 1
	ret

exit :
	move byte	rax, 0
	ret
