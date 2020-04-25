; POST steps
e_cpu_ok	equ		01h		; CPU flag and register tested
e_dmac_ok	equ		03h		; DMA-Controller initialized
; error codes
e_cpu_fail	equ		80h		; CPU test failed
; boot OS
e_boot		equ		0FFh	; boot the OS