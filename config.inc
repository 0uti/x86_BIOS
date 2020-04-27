%define DATE		'05/28/14'	; BIOS release date MM/DD/YY
%define VERSION		'0.0.1'		; BIOS version

%define BIOS_SEG	0F000h		; start of bios at segment F000h
%define	START		8000h		; start of bios at offset 8000h

%define EBDA_SEG	09FC0h		; start of EBDA (1K)
%define EBDA_SIZE	1			; 1K for EDBA

%define VGA_BEG		0c000h		; start of VGA BIOS scan
%define VGA_END		0c800h		; end of VGA BIOS scan
%define ROM_BEG		0c800h		; start of ROM scan
%define ROM_END		0f800h		; end of ROM scan


