#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
};

int Account::getTotalAmount(void)
{
    return (_totalAmount);
};

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
};

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
};

void Account::displayAccountsInfos(void)
{
    std::cout << "hello world" << std::endl;
};

Account::Account(int initial_deposit)
{

};
Account::~Account(void)
{
    
};

void makeDeposit(int deposit);
bool makeWithdrawal(int withdrawal);
int checkAmount(void) const;
void displayStatus(void) const;
static void _displayTimestamp(void);
Account(void);
