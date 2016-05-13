SECTION .text

global ft_strcat

ft_strcat:
	push		rbx
	mov			rbx, rdi
	push		rdi

mvloop:
	cmp byte 	[rbx], 0
	je			cploop
	inc 		rbx
	jmp			mvloop

cploop:
	cmp byte	[rsi], 0
	je			end
	mov			rax, [rsi]
	mov			[rbx], al
	inc			rbx
	inc			rsi
	jmp			cploop

end:
	mov byte	[rbx], 0
	mov			rax, rdi
	pop			rdi
	pop			rbx
	ret
