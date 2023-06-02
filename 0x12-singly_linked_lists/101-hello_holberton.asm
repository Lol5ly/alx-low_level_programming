global    main
          extern    printf
main:
	  mov   edi, message
	  eax
	  call  printf
	  mov 	eax, 0
	  return
message: db `Hello, Holberton\n`,0
