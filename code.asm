format ELF executable 3
entry main
segment readable writeable
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
.L1:
	MOV EAX, 2       ; Line 3
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L2:
	POP EAX       ; Line 4
	CALL print_number
.L3:
.L4:
	ADD ESP, 4
	POP EBP
	MOV EAX,1
	XOR EBX, EBX
	INT 0x80
	POP EBP
	RET
;-------------------------------
;         print library         
;-------------------------------
;-------------------------------
