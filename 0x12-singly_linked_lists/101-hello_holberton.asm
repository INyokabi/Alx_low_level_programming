extern printf

section .text
      global main

main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret

section .data

message: db `Hello, Holberton\n`,0
format: db "%s", 10, 0
