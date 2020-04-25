;-------------------------------------------------------------------------
; Initialize DMAC (8237)
dma_test:
	mov AL,04
	out dma8_status_reg,AL	; diable DMA controller

 	out	0Dh,AL				; DMA Master Clear register - reset DMA
 	mov	AL,40h				; single mode, verify, channel 0
 	out	dma8_mode_reg,AL	; DMA Mode register
 	mov	AL,41h				; single mode, verify, channel 1
 	out	dma8_mode_reg,AL	; DMA Mode register
 	mov	AL,42h				; single mode, verify, channel 2
 	out	dma8_mode_reg,AL	; DMA Mode register
 	mov	AL,43h				; single mode, verify, channel 3
 	out	dma8_mode_reg,AL	; DMA Mode register
 	mov	AL,0				; DMA Command register bits:
							; DACK active low, DREQ active high,
							; late write, fixed priority,
							; normal timing, controller enable
							; channel 0 addr hold disable
							; memory to memory disable
					
 	out	dma8_status_reg,AL	; DMA Command register
 	out	dmapage_ch2_reg,AL	; DMA Page, channel 2
 	out	dmapage_ch3_reg,AL	; DMA Page, channel 3
 	out	dmapage_ch1_reg,AL	; DMA Page, channel 1

dma_test_ok:
	mov	AL,e_dmac_ok
	out	post_reg,AL

	