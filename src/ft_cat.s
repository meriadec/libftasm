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

global _ft_cat

extern _ft_strlen

section .text

_ft_cat:

	; prologue
	push rbp
	mov rbp, rsp

read:

	; put rax to `read` sys call
	mov rax, 0x2000003

	; backup fd
	push rdi

	; string buf
	lea rsi, [rel buffer]

	; buf size
	mov rdx, bufsize

	; READ
	syscall

	; out if err
	jc err

	; exit if eof
	cmp rax, 0
	je end

	; file descriptor
	mov rdi, 1

	; size to write
	mov rdx, rax

	; put rax to `write` sys call
	mov rax, 0x2000004

	; WRITE
	syscall

	; out if err
	jc err

	; recuperate fd
	pop rdi

	; loop
	jmp read

err:
	pop rdi
	mov rax, 1

end:

	; epilogue
	mov rsp, rbp
	pop rbp

	ret

section .data

buffer times 255 db 0
bufsize equ $ - buffer
