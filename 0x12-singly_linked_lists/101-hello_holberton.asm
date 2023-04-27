section .data
message db 'Hello, Holberton',0
section .text
global main
extern printf
main:
push rbp
mov rbp, rsp
sub rsp, 16        ; reserve space for local variables
mov rdi, format
mov rsi, message
xor eax, eax
call printf
add rsp, 16        ; deallocate stack space
mov eax, 0
leave
ret
format:
db "%s", 10, 0
