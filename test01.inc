test_cpu:
	cli						; disable interrupts
	mov AH,0d5h				; set SF,CF,ZF and AF flags on
	sahf
	jnc	cpu_fail
	jnz	cpu_fail
	jnp	cpu_fail
	jns	cpu_fail
	lahf					; Load flag image to AH
	mov	CL,5				; load CNT reg with shift CNT
	shr	AH,cl				; shift AF into carry bit pos
	jnc	cpu_fail
	mov	AL,40h				; set the OF flag on
	shl	AL,1				; setup for testung
	jno	cpu_fail			; go to ERR ROUTINE if OF not set
	xor	AH,AH				; set AH = 0
	sahf					; CLEAR SF, CF, ZF, AND PF
	jbe	cpu_fail			; GO TO ERR ROUTINE IF CF or ZF ON
	js	cpu_fail			; GO TO ERR ROUTINE IF SF ON
	jp	cpu_fail			; GO TO ERR ROUTINE IF PF ON
	lahf					; LOAD FLAG IMAGE TO AH
	mov CL,5
	shr	AH,CL				; SHIFT AH INTO CARRY BIT POS
	jc	cpu_fail			; GO TO ERR ROUTINE IF ON
	shl	AH,1				; CHECK THAT OF IS CLEAR
	jo	cpu_fail			; GO TO ERR ROUTINE IF ON


;----- READ/WRITE THE 8088 GENERAL AND SEGMENTATION REGISTERS
;      WITH ALL ONE'S AND ZEROES'S.

	mov AX,0FFFFh
	stc						; set carry flag

.test_cpu_reg_1:
	mov	DS,AX
	mov	BX,DS
	mov	ES,BX
	mov	CX,ES
	mov	SS,CX
	mov	DX,SS
	mov	SP,DX
	mov	BP,SP
	mov	SI,BP
	mov	DI,SI
	jnc .test_cpu_reg_2
	xor ax,di				; Pattern make it thru all Regs
	jnz	cpu_fail			; No
	clc						; clear carry flag
	jmp	.test_cpu_reg_1

.test_cpu_reg_2:	
	or	AX,DI				;Zero pattern make it thru ?
	jz	cpu_ok				; CPU test OK
	
cpu_fail:
	mov AL, e_cpu_fail
	out	post_reg,AL

;-------------------------------------------------------------------------
; CPU error: continious beep - 400 Hz

	mov	AL,0B6h
	out	pit_ctl_reg,AL		; PIT - channel 2 mode 3
	mov	AX,pit_freq/400		; 400 Hz signal
	out	pit_ch2_reg,AL
	mov	AL,AH
	out	pit_ch2_reg,AL
	in	AL,port_b_reg
	or	AL,3			; turn speaker on and enable
	out	port_b_reg,AL		; PIT channel 2 to speaker

.cpu_fail_loop:
	hlt
	jmp	.cpu_fail_loop


cpu_ok:
	mov	AL,e_cpu_ok
	out	post_reg,AL

