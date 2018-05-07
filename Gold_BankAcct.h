#ifndef _GOLD_BANKACCT_H_
#define _GOLD_BANKACCT_H_
#include "ATM_BankAcct.h"

class Gold_BankAcct : public ATM_BankAcct
{
private:
	double interestRate;
public:
	Gold_BankAcct(char name[40], int num, double balance, int ATM_num, int PIN, double rate);
	void Withdraw(double cash);
	void Deposit(double cash);
};

#endif