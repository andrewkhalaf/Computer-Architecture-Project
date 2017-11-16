#include "DataMemory.h"



DataMemory::DataMemory()
{
	addr = 0;
	ReadData = 0;
	WriteData = 0;
	for (int i = 0; i < Memory.size(); i++)
		Memory[i] = 0;

}


DataMemory::~DataMemory() //to be discovered later onn........
{
}

void DataMemory::setaddr(int x)
{
	addr = x;
}

void DataMemory::setWritedata(int x)
{
	WriteData = x;

}

int DataMemory::getReadData()
{
	return Memory[addr];
}