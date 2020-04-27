	jmp BIOS_SEG:cold_start
	db	"00/00/00"	;assembly date in mm/dd/yy format
	db	0ffh	;empty
	db	0fch	;model byte = AT
	db	0ffh	;checksum goes here (later ...)