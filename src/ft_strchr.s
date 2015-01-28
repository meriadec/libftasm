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

global _ft_strchr

extern _ft_strlen

section .text

_ft_strchr:

	; prologue
	push rbp
	mov rbp, rsp

	call _ft_strlen

	; test if searching \0
	cmp rsi, 0
	je zerocase

	; set rcx with the result
	mov rcx, rax

	; backup rdi
	push rdi

	; increase length and backup it to go to \0
	inc rcx
	push rcx

	; set al to second arg
	mov al, sil

	; loop
	cld
	repne scasb

	; restoring length in rax
	pop rax

	; restoring rdi
	pop rdi

	; check if not found
	cmp rcx, 0
	je notfound

	; getting index
	inc rcx
	sub rax, rcx

	; increase rdi
	add rdi, rax
	mov rax, rdi
	jmp end

notfound:
	mov rax, 0
	jmp end

zerocase:
	add rdi, rax
	mov rax, rdi
	jmp end

end:

	; epilogue
	mov rsp, rbp
	pop rbp

	ret
