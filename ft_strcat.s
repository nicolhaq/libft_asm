SECTION .text

global _ft_strcat

_ft_strcat:
	mov			rax, rdi

mvloop:
	cmp byte 	[rax], 0
	je			cploop
	inc 		rax
	jmp			mvloop

cploop:
	cmp byte	[rsi], 0
	je			end
	mov			rax, [rsi]
	inc			rax
	inc			rsi
	jmp			cploop

end:
	ret
