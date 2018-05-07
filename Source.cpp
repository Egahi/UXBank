#include "Gold_BankAcct.h"			// linked to all necessary header files

int main(void)
{
	// Name, Account number, Amount
	BankAcct savings("SAVINGS", 0000000001, 50000.00);

	// Name, Account number, Amount, ATM_Account number, PIN
	ATM_BankAcct student("STUDENT", 0000000002, 20000.00, 0000000003, 1234);

	// Name, Account number, Amount, ATM_Account number, PIN, interest rate
	Gold_BankAcct current("CURRENT", 0000000004, 10000.00, 0000000005, 4321, 0.11);

	// pointer to all accounts
	BankAcct *accounts[3];
	accounts[0] = &savings;
	accounts[1] = &student;
	accounts[2] = &current;

	// declared here for scope
	char ans;

	do
	{
		// initialise afresh for every new transaction
		ans = 'n';
		int transaction = 0;

		cout << "TRANSACTION\n"
		 	 << "1. Withdraw\t\t\t2. Deposit\n";
		cin >> transaction;
		cin.ignore(15, '\n');
		
		double amount = 0.00;
		cout << "AMOUNT: ";
		cin >> amount;

		switch (transaction)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				accounts[i]->Withdraw(amount);
			}
			break;
		case 2:
			for (int i = 0; i < 3; i++)
			{
				accounts[i]->Deposit(amount);
			}
			break;
		default:
			cout << "\nINVALID OPERATION!\n";
		}

		for (int i = 0; i < 3; i++)
		{
			accounts[i]->ShowAll();
		}

		cout << "\n\nTRANSACTION COMPLETE.\n"
			 << "\nPerform another transaction?\n"
			 << "y or n?\n";
		cin >> ans;
		cin.ignore(15, '\n');

		// clear previous output
		system("cls");
	} while(ans == 'y' || ans == 'Y');

	system("pause");

	// success
	return 0;
}