global main
extern printf

section .data
msg db "Hello, Holberton", 0

section .text
main
	push ebp
	mov ebp, esp
	
		push msg
		call printf
		add esp, 4
		
	mov esp, ebp
	pop ebp
ret
