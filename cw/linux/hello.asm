;hello.asm

[SECTION .text]

global _start

_start:
	jmp short ender
	starter:
	
	xor eax, eax
	xor ebx, ebx
	xor edx, edx
	xor ecx, ecx

	mov al, 4;syscall write
	mov bl, 1;stout is 1
	pop ecx  ; get the address of the string from the stack
	mov dl, 5; lenght of string
	int 0x80

	xor eax, eax
	mov al, 1;exit the shellcode
	xor ebx, ebx
	int 0x80

	ender:
	call starter
	db 'hello'
