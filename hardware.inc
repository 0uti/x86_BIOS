; ------------------- START SYSTEM BOARD INTERNAL -----------------
; DMA 8bit
dma8_ch0_addr_reg	equ	0000h	; DMA-8 channel 0 base addres (r/w)
dma8_ch0_count_reg	equ	0001h	; DMA-8 channel 0 word count (r/w)
dma8_ch1_addr_reg	equ	0002h	; DMA-8 channel 1 base addres (r/w)
dma8_ch1_count_reg	equ	0003h	; DMA-8 channel 1 word count (r/w)
dma8_ch2_addr_reg	equ	0004h	; DMA-8 channel 2 base addres (r/w)
dma8_ch2_count_reg	equ	0005h	; DMA-8 channel 2 word count (r/w)
dma8_ch3_addr_reg	equ	0006h	; DMA-8 channel 3 base addres (r/w)
dma8_ch3_count_reg	equ	0007h	; DMA-8 channel 3 word count (r/w)
dma8_status_reg		equ 0008h	; DMA-8 channel 0-3 status register (r) / command register (w)
dma8_write_req_reg	equ 0009h	; DMA-8 write request register (w)
dma8_mask_reg		equ	000Ah	; DMA-8 single mask bit register (W)
dma8_mode_reg		equ	000Bh	; DMA-8 mode register (r/w)
dma8_ff_reg			equ	000Ch	; DMA-8 set (R) or clear (w)
								; first / last flip-flop
dma8_master_clear	equ 000Dh	; DMA-8 master clear
dma8_clear_mask		equ 000Eh	; DMA-8 clear mask register
dma8_write_mask		equ 000Fh	; DMA-8 write mask register

; PIC 1
pic1_reg0			equ	0020h
pic1_reg1			equ	0021h

; PIT
pit_ch0_reg			equ	0040h	; counter 0, counter devisor
pit_ch1_reg			equ	0041h	; counter 1, RAM refresh counter
pit_ch2_reg			equ	0042h	; counter 2, spreaker
pit_ctl_reg			equ	0043h	; control register

; KBD
kbd_reg				equ 0060h	; keyboard controller

; PORT B
port_b_reg			equ	0061h	; port B logic / second port of keyboard controller

;	RTC
rtc_addr_reg		equ	0070h	; RTC address port
rtc_data_reg		equ	0071h	; RTC data port

; POST
post_reg			equ	0080h	; POST status output port

; DMA-REG
dmapage_ch2_reg		equ	0081h	; DMA channel 2 address byte 2
dmapage_ch3_reg		equ	0082h	; DMA channel 3 address byte 2
dmapage_ch1_reg		equ 0083h	; DMA channel 1 address byte 2
dmapage_ch0_reg		equ 0087h	; DMA channel 0 address byte 2 / refresh register in XT

dmapage_ch6_reg		equ	0089h	; DMA channel 6 address byte 2
dmapage_ch7_reg		equ	008Ah	; DMA channel 7 address byte 2
dmapage_ch5_reg		equ 008Bh	; DMA channel 5 address byte 2
dmapage_ch4_reg		equ 008Fh	; DMA channel 4 address byte 2 / refresh register in AT

; PIC 2
pic2_reg0			equ	00A0h
pic2_reg1			equ	00A1h

; DMA 8bit
dma16_ch4_addr_reg	equ	00C0h	; DMA-16 channel 4 base addres (r/w)
dma16_ch4_count_reg	equ	00C2h	; DMA-16 channel 4 word count (r/w)
dma16_ch5_addr_reg	equ	00C4h	; DMA-16 channel 5 base addres (r/w)
dma16_ch5_count_reg	equ	00C6h	; DMA-16 channel 5 word count (r/w)
dma16_ch6_addr_reg	equ	00C8h	; DMA-16 channel 6 base addres (r/w)
dma16_ch6_count_reg	equ	00CAh	; DMA-16 channel 6 word count (r/w)
dma16_ch7_addr_reg	equ	00CCh	; DMA-16 channel 7 base addres (r/w)
dma16_ch7_count_reg	equ	00CEh	; DMA-16 channel 7 word count (r/w)
dma16_status_reg	equ 00D0h	; DMA-16 channel 4-7 status register (r) / command register (w)
dma16_write_req_reg	equ 00D2h	; DMA-16 write request register (w)
dma16_mask_reg		equ	00D4h	; DMA-16 single mask bit register (W)
dma16_mode_reg		equ	00D6h	; DMA-16 mode register (r/w)
dma16_ff_reg		equ	00D8h	; DMA-16 set (R) or clear (w)
								; first / last flip-flop
dma16_master_clear	equ 00DAh	; DMA-16 master clear
dma16_clear_mask	equ 00DCh	; DMA-16 clear mask register
dma16_write_mask	equ 00DEh	; DMA-16 write mask register

; Co-Processor (8087 -- 80387)
fpu_clear_busy		equ 00F0h	; math coprocessor clear busy latch
fpu_reset			equ 00F1h	; math coprocessor reset
fpu_opcode_1		equ 00F8h	; r/w	opcode transfer
fpu_opcode_2		equ 00FAh	; r/w	opcode transfer
fpu_opcode_3		equ 00FCh	; r/w	opcode transfer

; ------------------- END SYSTEM BOARD INTERNAL -------------------
; *
; ------------------- START PERIPHERAL ----------------------------

; HDC 2 --- 0170-0177
hdc2_data_reg		equ 0170h	; HDC 2 - data register
hdc2_error_reg		equ 0171h	; HDC 2 - error register
hdc2_sector_count	equ 0172h	; HDC 2 - sector count
hdc2_sector_num		equ 0173h	; HDC 2 - sector number
hdc2_cyl_low		equ 0174h	; HDC 2 - cylinder low
hdc2_cyl_high		equ 0175h	; HDC 2 - cylinder high
hdc2_drive_head		equ 0176h	; HDC 2 - drive/head
hdc2_status_reg		equ 0177h	; HDC 2 - status/command register

; HDC 1 --- 01F0-01F7
hdc1_data_reg		equ 01F0h	; HDC 1 - data register
hdc1_error_reg		equ 01F1h	; HDC 1 - error register
hdc1_sector_count	equ 01F2h	; HDC 1 - sector count
hdc1_sector_num		equ 01F3h	; HDC 1 - sector number
hdc1_cyl_low		equ 01F4h	; HDC 1 - cylinder low
hdc1_cyl_high		equ 01F5h	; HDC 1 - cylinder high
hdc1_drive_head		equ 01F6h	; HDC 1 - drive/head
hdc1_status_reg		equ 01F7h	; HDC 1 - status/command register

; LPT 2 --- 0278-027A (LPT 3 in a system with 3 or 4 LPTs)

; EGA   --- 02B0-02DF (alternate EGA,	primary EGA at 03C0)

; LPT 4 --- 02BC-02BF

; COM 4 --- 02E8-02EF

; COM 2 --- 02F8-02FF

; FDC 2 --- 0370-0377

; FDC 1 --- 03F0-03F7

; LPT 1 --- 0378-037A (LPT 2 in a system with 3 or 4 LPTs)

; MDA   --- 03B0-03BF (Monochrome Display Adapter based on 6845)

; LPT x --- 03BC-03BF (LPT 1 in a system with 3 or 4 LPTs)

; EGA   --- 03C0-03CF (1st Enhanced Graphics Adapter)	alternate at 02C0

; CGA   --- 03D0-03DF (Color Graphics Adapter)

; COM 3 --- 03E8-03EF

; COM 1 --- 03F8-03FF

; ------------------- END PERIPHERAL ------------------------------



; FREQ
pit_freq		equ	1193182	; PIC input frequency - 14318180 MHz / 12
