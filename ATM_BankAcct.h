#ifndef _ATM_BANKACCT_H_
#define _ATM_BANKACCT_H_
#include "BankAcct.h"

class ATM_BankAcct : public BankAcct
{
protected:
	int ATM_acctNumber;
	int PIN;
public:
	ATM_BankAcct() {};
	ATM_BankAcct(char name[40], int num, double balance, int ATM_num, int pin);
	void Withdraw(double cash);
	void Deposit(double cash);
};

#endif