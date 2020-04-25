	cpu 8086

%include    "macro.inc"			; set_loc macro
%include    "config.inc"		; some defaults
%include    "errno.inc"         ; POST codes
%include    "hardware.inc"      ; hardware addresses

bioscseg    equ 0F000h			; start of bios
biosdseg    equ 0040h
	org START


	setloc  0E05Bh
cold_start:
	mov ax, biosdseg
    mov ds, ax
    mov word [72h], 0

warm_start:
    cli
    cld

;=========================================================================
; Power On Self Test (POST)
;-------------------------------------------------------------------------
%include	"test01.inc"		; CPU Tests
%include	"test02.inc"		; DMA


%include	"reset.inc"			; reset vector
