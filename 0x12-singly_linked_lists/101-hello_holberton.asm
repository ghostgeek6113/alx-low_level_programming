section .data
message:		db "Hello, Holberton",10,0
first_printf_argument:		db "%s",0

	    section .text
	    global main
	    extern printf

main:
	    push rbp
	    mov rbp, rsp

	    mov rsi, message
	    mov rdi, first_printf_argument
	    call printf

	    pop rbp
	    mov rax, 0
	    ret
