extern printf

section .text

global    main

main:
	  mov   rdi, format
	  xor   eax, eax
	  call  printf
	  mov 	rax, 0
	  ret

section .data

message: db `Hello, Holberton\n`,0
format: db "%s", 10, 0
