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








; VIDEO
cga_mode_reg		equ	03D8h
mda_mode_reg		equ	03B8h

; PORT B Bits
iochk_disable		equ	08h		; clear and disable ~IOCHK NMI

; FREQ
pit_freq		equ	1193182	; PIC input frequency - 14318180 MHz / 12
