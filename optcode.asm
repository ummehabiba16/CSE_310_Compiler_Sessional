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
	SUB ESP, 4
.L1:
	MOV EAX, 0       ; Line 5
	MOV [EBP-4], EAX
.L2:
	MOV EAX, 6       ; Line 5
	MOV EDX, EAX
	MOV EAX, [EBP-4]       ; Line 5
	CMP EAX, EDX
	JL .L4
	JMP .L6
.L3:
	MOV EAX, [EBP-4]       ; Line 5
	PUSH EAX
	INC EAX
	MOV [EBP-4], EAX
	POP EAX
	JMP .L2
.L4:
	MOV EAX, [EBP-4]       ; Line 6
	CALL print_number
.L5:
	JMP .L3
.L6:
	MOV EAX, 4       ; Line 9
	MOV [EBP-12], EAX
.L7:
	MOV EAX, 6       ; Line 10
	MOV [EBP-16], EAX
.L8:
.L9:
	MOV EAX, 0       ; Line 11
	MOV EDX, EAX
	MOV EAX, [EBP-12]       ; Line 11
	CMP EAX, EDX
	JG .L10
	JMP .L13
.L10:
	MOV EAX, 3       ; Line 12
	MOV EDX, EAX
	MOV EAX, [EBP-16]       ; Line 12
	ADD EAX, EDX
	PUSH EAX
	POP EAX       ; Line 12
	MOV [EBP-16], EAX
.L11:
	MOV EAX, [EBP-12]       ; Line 13
	PUSH EAX
	DEC EAX
	MOV [EBP-12], EAX
	POP EAX
.L12:
	JMP .L9
.L13:
	MOV EAX, [EBP-16]       ; Line 16
	CALL print_number
.L14:
	MOV EAX, [EBP-12]       ; Line 17
	CALL print_number
.L15:
	MOV EAX, 4       ; Line 19
	MOV [EBP-12], EAX
.L16:
	MOV EAX, 6       ; Line 20
	MOV [EBP-16], EAX
.L17:
.L18:
	MOV EAX, [EBP-12]       ; Line 22
	PUSH EAX
	DEC EAX
	MOV [EBP-12], EAX
	POP EAX       ; Line 22
	CMP EAX, 0
	JNE .L19
	JMP .L21
.L19:
	MOV EAX, 3       ; Line 23
	MOV EDX, EAX
	MOV EAX, [EBP-16]       ; Line 23
	ADD EAX, EDX
	PUSH EAX
	POP EAX       ; Line 23
	MOV [EBP-16], EAX
.L20:
	JMP .L18
.L21:
	MOV EAX, [EBP-16]       ; Line 26
	CALL print_number
.L22:
	MOV EAX, [EBP-12]       ; Line 27
	CALL print_number
.L23:
	MOV EAX, 0       ; Line 30
	JMP .L25
.L24:
.L25:
	ADD ESP, 16
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
