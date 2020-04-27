; BIOS data area -> https://www.matrix-bios.nl/system/bda.html

bda_reg         equ 0040h ; Base Address

; Offsets
; ----------------------------------------------------------------------------------------------------
bda_com1        equ 00h ; Base I/O address for serial port 1 (communications port 1 - COM 1)
bda_com2        equ 02h ; Base I/O address for serial port 2 (communications port 2 - COM 2)
bda_com3        equ 04h ; Base I/O address for serial port 4 (communications port 3 - COM 3)
bda_com4        equ 06h ; Base I/O address for serial port 5 (communications port 4 - COM 4)
bda_lpt1        equ 08h ; Base I/O address for parallel port 1 (printer port 1 - LPT 1)
bda_lpt2        equ 0Ah ; Base I/O address for parallel port 2 (printer port 2 - LPT 2)
bda_lpt3        equ 0Ch ; Base I/O address for parallel port 3 (printer port 3 - LPT 3)
bda_ebda        equ 0Eh ; Extended bios data area -> https://www.matrix-bios.nl/system/ebda.html
bda_equip       equ 10h ; Equitment Word
bda_post        equ 12h ; Interrupt flag - Manufacturing test
bda_memsize     equ 13h ; Memory size in Kb
bda_errcodes    equ 15h
bda_kbdflag1    equ 17h ; Keyboard shift flags 1
bda_kbdflag2    equ 18h ; Keyboard shift flags 2 
bda_kbdaltpad   equ 19h ; Alt Numpad work area
bda_kbdnextchar equ 1Ah ; Pointer to the address of the next character in the keyboard buffer
bda_kbdlastchar equ 1Ch ; Pointer to the address of the last character in he keyboard buffer
bda_kbdbuffer   equ 1Eh ; Keyboard buffer
bda_fddcalstat  equ 3Eh ; Floppy disk drive calibration status
bda_fddmotstat  equ 3Fh ; Floppy disk drive motor status
bda_fddmottout  equ 40h ; Floppy disk drive motor time-out
bda_fdderror    equ 41h ; Floppy disk drive status (errors)
bda_fddstates	equ 42h ; Hard disk and floppy controller status register (3 bytes)
bda_fddstate0	equ 42h ; Hard disk and floppy controller status register 0
bda_fddstate1	equ 43h ; Hard disk and floppy controller status register 1
bda_fddstate2	equ 44h ; Hard disk and floppy controller status register 2
bda_fddcyl      equ 45h ; Floppy disk controller: cylinder number
bda_fddhead     equ 46h ; Floppy disk controller: head number
bda_fddsect     equ 47h ; Floppy disk controller: sector number
bda_fddwrbytes  equ 48h ; Floppy disk controller: number of byte written
bda_vidmode     equ 49h ; Active video mode setting
bda_vidcolumns  equ 4Ah ; Number of textcolumns per row for the active video mode
bda_vidpagesize equ 4Ch ; Size of active video in page bytes
bda_vidpageofft equ 4Eh ; Offset address of the active video page relative to the start of video RAMe
bda_vidcurpos   equ 50h ; Cursor position for video page (Word 16bytes)
bda_vidcurpos0  equ 50h ; Cursor position for video page 0
bda_vidcurpos1  equ 52h ; Cursor position for video page 1
bda_vidcurpos2  equ 54h ; Cursor position for video page 2
bda_vidcurpos3  equ 56h ; Cursor position for video page 3
bda_vidcurpos4  equ 57h ; Cursor position for video page 4
bda_vidcurpos5  equ 5Ah ; Cursor position for video page 5
bda_vidcurpos6  equ 5Ch ; Cursor position for video page 6
bda_vidcurpos7  equ 5Eh ; Cursor position for video page 7
bda_vidcurshape equ 60h ; Cursor shape
bda_vidpage     equ 62h ; Active video page
bda_vidaddr		equ 63h ; I/O port address for the video display adapter
bda_vidmodreg	equ 65h ; Video display adapter internal mode register
bda_vidcolorpal equ 66h ; Color palette
bda_adaptromoff	equ 67h ; Adapter ROM offset address
bda_adaptromseg equ 69h ; Adapter ROM segment address
bda_lastirq		equ 6Bh ; Last interrupt (not PC)
bda_cntint1ah   equ 6Ch ; Counter for Interrupt 1Ah (4bytes)
bda_cntint1ahl  equ 6Ch ; Counter for Interrupt 1Ah Low word
bda_cntint1ahh  equ 6Eh ; Counter for Interrupt 1Ah High word
bda_24hflag     equ 70h ; Timer 24 hour flag
bda_kbdbreak    equ 71h ; Keyboard Ctrl-Break flag
bda_softreset   equ 72h ; Soft reset flag (1234h)
bda_hddlopstat  equ 74h ; Status of last hard disk operation
bda_hddnumdriv  equ 75h ; Number of hard disk drives
bda_hddctrlbyte equ 76h ; Hard disk control byte
bda_hddaddrofft equ 77h ; Offset address of hard disk I/O port (XT)
bda_toutlpt1	equ 78h ; Parallel port 1 timeout
bda_toutlpt2	equ 79h ; Parallel port 2 timeout
bda_toutlpt3	equ 7Ah ; Parallel port 3 timeout
bda_vds			equ 7Bh ; support for virtual DMA services (VDS)
bda_toutcom1    equ 7Ch ; Serial port 1 timeout
bda_toutcom2    equ 7Dh ; Serial port 2 timeout
bda_toutcom3    equ 7Eh ; Serial port 3 timeout
bda_toutcom4    equ 7Fh ; Serial port 4 timeout
bda_kbdbufstart equ 80h ; Starting address of keyboard buffer
bda_kbdbufend   equ 82h ; Ending address of keyboard buffer
bda_vidrows		equ 84h ; Number of video rows (minus 1)
bda_vidlinechar equ 85h ; Number of scan lines per character
bda_vidoptions  equ 87h ; Video display adapter options
bda_vidswitches equ 88h ; Video display adapter switches
bda_vidvgaflag1 equ 89h ; VGA video flags 1
bda_vidvgaflag2 equ 8Ah ; VGA video flags 2
bda_fddconfig   equ 8Bh ; Floppy disk configuration data
bda_hddctrlstat equ 8Ch ; Hard disk drive controller status
bda_hdderror    equ 8Dh ; Hard disk drive error
bda_hddtaskdone equ 8Eh ; Hard disk drive task complete flag
bda_fddinfo     equ 8Fh ; Floppy disk drive information
bda_fddmedia0   equ 90h ; Diskette 0 media state
bda_fddmedia1   equ 91h ; Diskette 1 media state
bda_fddopstat0  equ 92h ; Diskette 0 operational starting state
bda_fddopstat1  equ 93h ; Diskette 1 operational starting status
bda_fddcurrcyl0 equ 94h ; Diskette 0 current cylinder
bda_fddcurrcyl1 equ 95h ; Diskette 1 current cylinder
bda_kbdflags3   equ 96h ; Keyboard status flags 3
bda_kbdflags4   equ 97h ; Keyboard status flags 4

bda_usrwaitptr  equ 98h ; Segment:Offset address of user wait flag pointer
bda_usrwaitcnt  equ 9Ch ; User wait count
bda_usrwaitflag equ 0A0h; User wait flag
bda_lanbytes    equ 0A1h; Local area network (LAN) bytes
bda_vidctrlblk  equ 0A8h; Segment:Offset address of video parameter control block

; 0ACh - Reserved
; 0F0h - Intra-applications communications area

