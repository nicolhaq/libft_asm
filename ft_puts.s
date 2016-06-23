section .data
endl	db	10
msg		db	"(null)", 0

section .text
global ft_puts

extern		ft_strlen

ft_puts:
	push		rdi
	push		rsi
	push		rdx
	cmp			rdi, 0
	je			put_null
	jmp			puts
put_null:
	lea			rdi, [rel msg]
	jmp			puts

puts:
	call		ft_strlen
	mov			rsi, rdi
	mov			edi, 1
	mov			rdx, rax
	mov			rax, WRITE
	syscall
	cmp			eax, -1
	je			error
	lea			rsi, [rel endl]
	mov			edi, 1
	mov			edx, 1
	mov			rax, WRITE
	syscall
	mov			eax, 10

error:
	pop			rdx
	pop			rsi
	pop			rdi
	ret
