#include"XqDisassemblerEngine.h"
#include<stdio.h>


void main()
{
	XqDisassemblerEngine XqEngine;
	BYTE Opcode[] = {
		0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0xE0, 0x6B, 0x48, 0x00, 0x68, 0x4C, 0x21, 0x46, 0x00, 0x64,
		0xA1, 0x00, 0x00, 0x00, 0x00, 0x50, 0x64, 0x89, 0x25, 0x00, 0x00, 0x00, 0x00, 0x83, 0xEC, 0x58,
		0x53, 0x56, 0x57, 0x89, 0x65, 0xE8, 0xFF, 0x15, 0x34, 0xD3, 0x47, 0x00, 0x33, 0xD2, 0x8A, 0xD4,
		0x89, 0x15, 0x50, 0x12, 0x4B, 0x00, 0x8B, 0xC8, 0x81, 0xE1, 0xFF, 0x00, 0x00, 0x00, 0x89, 0x0D,
		0x4C, 0x12, 0x4B, 0x00, 0xC1, 0xE1, 0x08, 0x03, 0xCA, 0x89, 0x0D, 0x48, 0x12, 0x4B, 0x00, 0xC1,
		0xE8, 0x10, 0xA3, 0x44, 0x12, 0x4B, 0x00, 0x6A, 0x01, 0xE8, 0xC1, 0x4B, 0x00, 0x00, 0x59, 0x85,
		0xC0, 0x75, 0x08, 0x6A, 0x1C, 0xE8, 0xC3, 0x00, 0x00, 0x00, 0x59, 0xE8, 0x6C, 0x49, 0x00, 0x00,
		0x85, 0xC0, 0x75, 0x08, 0x6A, 0x10, 0xE8, 0xB2, 0x00, 0x00, 0x00, 0x59, 0x33, 0xF6, 0x89, 0x75,
		0xFC, 0xE8, 0x9A, 0x47, 0x00, 0x00, 0xFF, 0x15, 0x58, 0xD3, 0x47, 0x00, 0xA3, 0x24, 0x29, 0x4B,
		0x00, 0xE8, 0x58, 0x46, 0x00, 0x00, 0xA3, 0xC0, 0x11, 0x4B, 0x00, 0xE8, 0x01, 0x44, 0x00, 0x00,
		0xE8, 0x43, 0x43, 0x00, 0x00, 0xE8, 0xFA, 0x35, 0x00, 0x00, 0x89, 0x75, 0xD0, 0x8D, 0x45, 0xA4,
		0x50, 0xFF, 0x15, 0xE4, 0xD2, 0x47, 0x00, 0xE8, 0xD4, 0x42, 0x00, 0x00, 0x89, 0x45, 0x9C, 0xF6,
		0x45, 0xD0, 0x01, 0x74, 0x06, 0x0F, 0xB7, 0x45, 0xD4, 0xEB, 0x03, 0x6A, 0x0A, 0x58, 0x50, 0xFF,
		0x75, 0x9C, 0x56, 0x56, 0xFF, 0x15, 0x4C, 0xD3, 0x47, 0x00, 0x50, 0xE8, 0xC7, 0xDD, 0x00, 0x00,
		0x89, 0x45, 0xA0, 0x50, 0xE8, 0xE8, 0x35, 0x00, 0x00, 0x8B, 0x45, 0xEC, 0x8B, 0x08, 0x8B, 0x09,
		0x89, 0x4D, 0x98, 0x50, 0x51, 0xE8, 0x1E, 0x41, 0x00, 0x00, 0x59, 0x59, 0xC3
	};
	XqEngine.XqDisassembler_Start(Opcode,sizeof(Opcode), 0x0045D4C7);
	XqEngine.ShowDissembler_Str();
	getchar();
}