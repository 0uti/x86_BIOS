	cpu 8086
; some constats
%include "macro.inc"            ; set_loc macro
%include "config.inc"           ; some defaults
%include "errno.inc"            ; POST codes
%include "hardware.inc"         ; hardware addresses
%include "bda.inc"              ; BIOS date area
%include "ebda.inc"             ; Extended BIOS data area

; ONLY '%define' and 'equ' befor org line
	org START


; -------------------------------------------------------------------------------------------------
	setloc  0E05Bh              ; POST entry point (616 bytes)
cold_start:
	mov ax, bda_reg
	mov ds, ax
	mov word [bda_softreset], 0

warm_start:
    cli
    cld

%include "test01.inc"           ; CPU Tests
%include "test02.inc"           ; DMA
; -------------------------------------------------------------------------------------------------
	setloc  0E2C3h              ; NMI handler entry point (315 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E3FEh              ; Int 13h hard disk drive service entry point (3 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E401h              ; Hard disk drive parameter table (753 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E6F2h              ; Int 19h bootstrap loader service entry point (3 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E6F5h              ; System configuration data table (52 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E729h              ; Baudrate initialization table (16 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E739h              ; Int 14h serial communications service entry point (245 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E82Eh              ; Int 16h keyboard service entry point (345 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0E987h              ; Int 09h keyboard service entry point (722 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0EC59h              ; Int 13h floppy disk service entry point (766 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0EF57h              ; Int 0Eh floppy disk hardware interrupt service routine entry point (112 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0EFC7h              ; Floppy disk drive parameter table (11 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0EFD2h              ; Int 17h parallel printer service entry point (115 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0F045h              ; Int 10h video service entry point (functions 00h through 0Fh) (32 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0F065h              ; Int 10h video service entry point (63 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0F0A4h              ; MDA/CGA video parameter table (Int 1Dh) (1949 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0F841h              ; Int 12h memory size service entry point (12 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0F84Dh              ; Int 11h equipment list service entry point (12 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0F859h              ; Int 15h system services entry point (533 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0FA6Eh              ; Graphics font table (low-order 128 characters) (1024 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0FE6Eh              ; Int 1Ah time-of-day service entry point (55 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0FEA5h              ; Int 08h system timer interrupt service routine entry point (78 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0FEF3h              ; Initial interrupt vector offsets (96 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0FF53h              ; IRET instruction for dummy interrupt handler (1 byte)
; -------------------------------------------------------------------------------------------------
	setloc  0FF54h              ; Int 05h print screen service entry point (156 bytes)
; -------------------------------------------------------------------------------------------------
	setloc  0FFF0h              ; Power-on entry point  (16 bytes)
%include "reset.inc"            ; reset vector
; -------------------------------------------------------------------------------------------------
; End of BIOS
