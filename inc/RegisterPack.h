#ifndef REGISTER_PACK_H
#define REGISTER_PACK_H

#include "../inc/Register_F.h"
#include "../inc/Register_32bits.h"

struct RegisterPack 
{
	/* 32-bit registers  		*/
	Register_32bits regR0;
	Register_32bits regR1;
	Register_32bits regR2;
	Register_32bits regR3;
	Register_32bits regR4;
	Register_32bits regR5;
	Register_32bits regR6;
	Register_32bits regR7;
	Register_32bits regR8;
	Register_32bits regR9;
	Register_32bits regR10;
	Register_32bits regR11;
	Register_32bits regR12;

		/* 8-bit registers  		*/
	Register_8bits regB;
	Register_8bits regC;
	Register_8bits regD;
	Register_8bits regE;
	Register_8bits regH;
	Register_8bits regL;
	Register_8bits regA;
	Register_F regF;
	Register_8bits regI;
	Register_8bits regR;
	
	/* 16-bit registers  		*/
	Register_16bits regSP;
	Register_16bits regPC;
	Register_16bits regBC;
	Register_16bits regDE;
	Register_16bits regHL;
	Register_16bits regAF;
	Register_16bits regIX;
	Register_16bits regIY;

	/* 16-bit hidden registers	*/
	Register_16bits regAFp;
	Register_16bits regBCp;
	Register_16bits regDEp;
	Register_16bits regHLp;
};

#endif