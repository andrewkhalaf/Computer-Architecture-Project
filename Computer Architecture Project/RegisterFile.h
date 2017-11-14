#include<vector>
using namespace std;

#pragma once
class RegisterFile
{

private:
	vector<int> regs;
	bool enablewrite;
	bool enableread;
	int writedata;
	int reg1addr;
	int reg2addr;
	int writeaddr;
	int writedata;
	

public:
	RegisterFile();
	~RegisterFile();
	//void regwrite(int); 
	int reg1read();
	int reg2read();
	void setaddr1(int);
	void setaddr2(int);
	void setwriteaddr(int);
	void setwritedata(int);
};

