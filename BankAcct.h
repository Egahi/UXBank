#ifndef _BANKACCT_H_
#define _BANKACCT_H_

#include <iostream>
#include <cstring>

using namespace std;

class BankAcct
{
protected:
	char acctName[40];
	int acctNumber;
	double acctBalance;
public:
	BankAcct() {};
	BankAcct(char name[40], int num, double balance);
	virtual void Deposit(double cash);
	virtual void Withdraw(double cash);
	virtual void ShowAll();
};

#endif