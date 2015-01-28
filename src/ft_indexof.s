; ============================================================================ ;
;                                                                              ;
;    ██╗  ██╗██████╗                                                           ;
;    ██║  ██║╚════██╗                                                          ;
;    ███████║ █████╔╝              created by: mpillet                         ;
;    ╚════██║██╔═══╝                       at: 2015-01-22 00:00:01             ;
;         ██║███████╗                                                          ;
;         ╚═╝╚══════╝                                                          ;
;    ███████╗ █████╗ ██╗   ██╗ █████╗ ████████╗████████╗ █████╗ ███████╗       ;
;    ╚══███╔╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝       ;
;      ███╔╝ ███████║██║   ██║███████║   ██║      ██║   ███████║███████╗       ;
;     ███╔╝  ██╔══██║╚██╗ ██╔╝██╔══██║   ██║      ██║   ██╔══██║╚════██║       ;
;    ███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║      ██║   ██║  ██║███████║       ;
;    ╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝       ;
;                                                                              ;
; ============================================================================ ;

global _ft_indexof

extern _ft_strlen

section .text

_ft_indexof:

	; prologue
	push rbp
	mov rbp, rsp

	; saving rcx
	push rcx

	; saving rdi
	push rdi

	; strlen
	mov rdi, rsi
	call _ft_strlen

	; set rcx with the result
	mov rcx, rax

	; restore rdi
	pop rdi

	; backup length and increase it to go to \0
	inc rcx
	push rcx

	; set al to first arg
	mov al, dil

	; set rdi to second arg
	mov rdi, rsi

	; loop
	cld
	repne scasb

	; restoring length in rax
	pop rax

	; check if not found
	cmp rcx, 0
	je notfound

	; getting index
	inc rcx
	sub rax, rcx
	jmp end

notfound:
	mov rax, -1

end:

	; restoring rcx
	pop rcx

	; epilogue
	mov rsp, rbp
	pop rbp

	ret
