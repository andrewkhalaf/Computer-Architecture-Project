#include "RegisterFile.h"

int RegisterFile::reg1read()
{
	if (enableread)
		return regs[reg1addr];
}
int RegisterFile::reg2read()
{
	if (enableread)
		return regs[reg2addr];
}

void RegisterFile::setaddr1(int addr)
{
	reg1addr = addr;
}
void RegisterFile::setaddr2(int addr)
{
	reg2addr = addr;
}

//void RegisterFile::regwrite(int data)
//{
//
//	if (enablewrite)
//		regs[writeaddr] = data;
//
//}

void RegisterFile::setwriteaddr(int addr)
{
	writeaddr = addr;

}

void RegisterFile::setwritedata(int data)
{

	writedata = data;

}

RegisterFile::RegisterFile()
{
	regs.resize(32);
	regs[0] = 0;

	for (int i = 0; i < regs.size(); i++)
		regs[i] = 0;
	
}


RegisterFile::~RegisterFile() //not experiences with destructors.. will be seen later !
{
}


