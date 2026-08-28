format ELF executable 3
entry main
segment readable writeable
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
	SUB ESP, 4
.L1:
	MOV EAX, 0       ; Line 3
	MOV [EBP-8], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, [EBP-8]       ; Line 4
	NOT EAX
	PUSH EAX
	POP EAX       ; Line 4
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L3:
	MOV EAX, [EBP-4]       ; Line 5
	CALL print_number
.L4:
.L5:
	ADD ESP, 8
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
