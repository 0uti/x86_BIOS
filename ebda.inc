; extended BIOS data area -> https://www.matrix-bios.nl/system/ebda.html

ebda_size        equ 00h ; Size of Extended BIOS Data Area
ebda_postretries equ 17h ; Number of POST error entries
ebda_posterrlog  equ 18h ; POST error log (5 words)
ebda_mousecall   equ 22h ; Mouse device driver far call
ebda_mouseflag1  equ 26h ; Mouse flags 1
ebda_mouseflag2  equ 27h ; Mouse flags 2
ebda_mousedata   equ 28h ; Mouse data (8 bytes)
ebda_wdogtimer   equ 39h ; Watchdog timer (1 word)
ebda_hddparatab0 equ 3Dh ; Hard disk 0 parameter table (16 bytes)
ebda_hddparatab1 equ 4Dh ; Hard disk 1 parameter table (16 bytes)
ebda_cachectrl   equ 68h ; Cache control
ebda_kbdreprate  equ 6Eh ; Keyboard repeat rate
ebda_kbdrepdelay equ 6Fh ; Delay until keys repeat
ebda_hddnumdrive equ 70h ; Number of hard disk drives installed
ebda_hdddmachan  equ 71h ; DMA channel for hard disk drive
ebda_hddintstat  equ 72h ; Hard disk interrupt status
ebda_hddopflags  equ 73h ; Hard disk operation flags
ebda_int76hptr   equ 74h ; Old Int 76h vector pointer (1 dWord)
ebda_hdddmatype  equ 78h ; Hard disk DMA type
ebda_hddlopstat  equ 79h ; Hard disk: status of last operation
ebda_hddtoutval  equ 7Ah ; Hard disk: timeout value
ebda_hddretstat  equ 7Eh ; Hard disk controller: return status words (8 words)
