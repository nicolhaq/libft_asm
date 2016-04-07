SECTION .text

global _strcat

_strcat:
	mov		rdi,rax

mvloop:
	cmp byte	rdi , 0
	je		cploop
	inc 	rdi
	jmp		mvloop

cploop:
	movsb
	cmp byte	rsi ,0
	je		end
	jmp		cploop

end:
	ret
