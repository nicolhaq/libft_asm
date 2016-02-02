SECTION .text

global _ft_isalpha

_ft_isalpha :
	cmp		rsi, 65
	jle		exit
	cmp		rsi, 90
	jge		exit
	cmp		rsi, 97
	jle		exit
	cmp		rsi, 122
	jge		exit
	move byte	rax, 1
	ret

exit :
	move byte	rax, 0
	ret
