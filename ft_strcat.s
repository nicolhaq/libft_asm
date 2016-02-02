SECTION .text

global _strcat

_strcat:
	mov		rdi,rax

mvloop:
	cmpb	0,rdi
	je		cploop
	inc 	rdi
	jmp		mvloop

cploop:
	movsb
	cmpb	0,rsi
	je		end
	jmp		cploop

end:
	ret	
