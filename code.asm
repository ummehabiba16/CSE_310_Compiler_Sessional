format ELF executable 3
entry main
segment readable writeable
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
	SUB ESP, 4
	SUB ESP, 4
.L1:
	MOV EAX, 2       ; Line 3
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, 3       ; Line 4
	MOV [EBP-8], EAX
	PUSH EAX
	POP EAX
.L3:
	MOV EAX, [EBP-8]       ; Line 5
	MOV ECX, EAX
	MOV EAX, [EBP-4]       ; Line 5
	CWD
	MUL ECX
	PUSH EAX
	POP EAX       ; Line 5
	MOV [EBP-12], EAX
	PUSH EAX
	POP EAX
.L4:
	MOV EAX, [EBP-12]       ; Line 6
	CALL print_number
.L5:
	MOV EAX, [EBP-4]       ; Line 7
	MOV ECX, EAX
	MOV EAX, [EBP-8]       ; Line 7
	CWD
	DIV ECX
	PUSH EDX
	POP EAX       ; Line 7
	MOV [EBP-12], EAX
	PUSH EAX
	POP EAX
.L6:
	MOV EAX, [EBP-12]       ; Line 8
	CALL print_number
.L7:
.L8:
	ADD ESP, 12
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
