#include<vector>
using namespace std;


#pragma once
class DataMemory
{
public:
	DataMemory();
	~DataMemory();
	void setaddr(int);
	void setWritedata(int);
	int getReadData();
	
private:
	vector<int> Memory;
	int addr;
	int WriteData;
	int ReadData;


};

