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

global _ft_isalpha

section .text

_ft_isalpha:
	mov rax, 1
	cmp rdi, 65
	js nop
	cmp rdi, 91
	js yep
	cmp rdi, 97
	js nop
	cmp rdi, 123
	js yep

nop:
	mov rax, 0
	jmp end

yep:
	mov rax, 1
	jmp end

end:
	ret
