
	global	main
	extern	printf
main:
	mov	edi,	message
	xor	eax,	eax
	call	printf
	ret
message:
	db	'Hello, Holberton\n',0
