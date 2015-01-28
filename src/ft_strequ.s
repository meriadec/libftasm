; ============================================================================ ;
;                                                                              ;
;    ██╗  ██╗███████╗ █████╗ ██╗   ██╗                                         ;
;    ██║  ██║╚══███╔╝██╔══██╗██║   ██║                                         ;
;    ███████║  ███╔╝ ███████║██║   ██║         by: mpillet                     ;
;    ╚════██║ ███╔╝  ██╔══██║╚██╗ ██╔╝         at: 2015-01-22 00:00:01         ;
;         ██║███████╗██║  ██║ ╚████╔╝                                          ;
;         ╚═╝╚══════╝╚═╝  ╚═╝  ╚═══╝                                           ;
;                                                                              ;
; ============================================================================ ;

global _ft_strequ

section .text

_ft_strequ:

	; prologue
	push rbp
	mov rbp, rsp

	push rcx

	cmp rdi, 0
	je end

	cmp rsi, 0
	je end

	mov rcx, 0

lp:

	cmp byte[rdi + rcx], 0
	je check2

	cmp byte[rsi + rcx], 0
	je check1

	mov al, byte[rsi + rcx]
	cmp byte[rdi + rcx], al
	jne nop

	inc rcx

	jmp lp

check1:
	cmp byte[rdi + rcx], 0
	je yep
	jmp nop

check2:
	cmp byte[rsi + rcx], 0
	je yep
	jmp nop

yep:
	mov rax, 1
	jmp end

nop:
	mov rax, 0
	jmp end

end:

	pop rcx

	; epilogue
	mov rsp, rbp
	pop rbp

	ret
