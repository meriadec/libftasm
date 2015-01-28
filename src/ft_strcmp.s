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

global _ft_strcmp

section .text

_ft_strcmp:
	mov rax, 3
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je out
	cmp rsi, 0
	je out
	push rdi
	push rsi

loop:
	mov al, [rdi]
	mov bl, [rsi]
	cmp al, bl
	jne diff
	cmp al, 0
	mov rax, 0
	jz out
	inc rdi
	inc rsi
	jmp loop

diff:
	jg str2
	mov rax, -1
	jmp out

str2:
	mov rax, 1

out:
	mov rsp, rbp
	pop rbp
	ret
