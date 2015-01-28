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

global _ft_strdup

extern _ft_strlen
extern _ft_memcpy
extern _malloc

section .text

_ft_strdup:
	; prologue
	push rbp
	mov rbp, rsp

	mov rax, 0
	cmp rdi, 0
	je end

	push rsi
	push rdi
	; get length, and saves it into stack
	call _ft_strlen
	push rax
	; prepare and call malloc
	mov rdi, rax
	call _malloc
	; prepare and call memcpy
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy
	pop rsi

end:
	mov rsp, rbp
	pop rbp
	ret
