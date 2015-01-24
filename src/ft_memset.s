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

global _ft_memset

section .text

_ft_memset:
	cmp rdi, 0
	jz end
	mov rcx, rdi

lp:
	cmp rdx, 0
	jle end
	mov [rcx], rsi
	inc rcx
	dec rdx
	jmp lp

end:
	mov rax, rdi
	ret
